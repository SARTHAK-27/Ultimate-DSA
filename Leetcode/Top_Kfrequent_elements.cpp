class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[nums[i]]++;
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> mH;
        for (auto i = mp.begin(); i != mp.end(); i++)
        {
            mH.push({i->second, i->first});
            if (mH.size() > k)
            {
                mH.pop();
            }
        }

        while (mH.size() > 0)
        {
            ans.push_back(mH.top().second);
            mH.pop();
        }
        return ans;
    }
};