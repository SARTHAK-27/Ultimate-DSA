void solve(vector<vector<int>> &ans, vector<int> &A, vector<int> &temp, int start, int sum)
{
    if (sum == 0)
    {
        ans.push_back(temp);
        return;
    }

    for (int i = start; i < A.size(); i++)
    {
        if (sum - A[i] >= 0)
        {
            temp.push_back(A[i]);
            solve(ans, A, temp, i, sum - A[i]);
            temp.pop_back();
        }
        while (i + 1 < A.size() and A[i] == A[i + 1])
            i++;
    }
}

vector<vector<int>> Solution::combinationSum(vector<int> &A, int sum)
{
    sort(A.begin(), A.end());
    vector<vector<int>> ans;

    vector<int> temp;

    solve(ans, A, temp, 0, sum);

    return ans;
}