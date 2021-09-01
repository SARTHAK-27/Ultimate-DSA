void backtrack(vector<int> &A, vector<vector<int>> &ans, vector<int> &temp, int start)
{
    ans.push_back(temp);

    for (int i = start; i < A.size(); i++)
    {
        if (i != start && A[i] == A[i - 1])
        {
            continue;
        }
        temp.push_back(A[i]);
        backtrack(A, ans, temp, i + 1);
        temp.pop_back();
    }
}

vector<vector<int>> Solution::subsetsWithDup(vector<int> &A)
{
    vector<vector<int>> ans;
    vector<int> temp;

    sort(A.begin(), A.end());

    backtrack(A, ans, temp, 0);

    return ans;
}
