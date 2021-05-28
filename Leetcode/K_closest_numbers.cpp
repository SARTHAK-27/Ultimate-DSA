class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) 
    {
        vector<int> ans;
        priority_queue<pair<int,int>> MaxH;
        for(int i=0; i<arr.size(); i++)
        {
            MaxH.push(make_pair(abs(arr[i]-x) , arr[i]));
            if(MaxH.size() > k)
            {
                MaxH.pop();
            }
        }
        while(MaxH.size() > 0)
        {
            ans.push_back(MaxH.top().second);
            MaxH.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};