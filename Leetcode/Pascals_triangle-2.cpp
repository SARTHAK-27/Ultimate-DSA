class Solution
{
public:
    vector<int> getRow(int A)
    {
        vector<int> ans;
        long double prev = 1;
        ans.push_back(prev);
        long double curr;

        for (int i = 1; i <= A; i++)
        {
            curr = (prev * (A - i + 1)) / i;
            ans.push_back(curr);
            prev = curr;
        }
        return ans;
    }
};