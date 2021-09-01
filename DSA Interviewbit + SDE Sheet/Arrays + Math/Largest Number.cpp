class Solution {
public:
    static bool comp(string a, string b)
    {
        string ab = a.append(b);
        string ba = b.append(a);
        return ab.compare(ba)>0 ? true:false;
    }
    string largestNumber(vector<int>& nums) 
    {
        int n = nums.size();
        string s = "";
        vector<string> ans;
        int c = 0;
        for(int i=0; i<n; i++)
        {
            ans.push_back(to_string(nums[i]));
            if(nums[i] == 0)
            {
                c++;
            }
        }
        if(c == n)
        {
            return "0";
        }
        sort(ans.begin() , ans.end() , comp);
        for(int i=0; i<n; i++)
        {
            s += ans[i];
        }
        return s;
    }
};