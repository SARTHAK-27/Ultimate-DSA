class Solution
{
public:
    void solve(int start, int sum, vector<int> &arr, int n, vector<int> &ans)
    {
        if (start == n)
        {
            ans.push_back(sum);
            return;
        }

        solve(start + 1, sum + arr[start], arr, n, ans);

        solve(start + 1, sum, arr, n, ans);
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
        int sum = 0;
        solve(0, sum, arr, N, ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};