vector<int> Solution::solve(vector<int> &A, int B)
{
    int n = A.size();
    vector<int> ans;
    if (n == 1)
    {
        return A;
    }
    priority_queue<int, vector<int>, greater<int>> minh;
    for (int i = 0; i < n; i++)
    {
        minh.push(A[i]);
        if (minh.size() > B)
        {
            minh.pop();
        }
    }

    while (minh.size() > 0)
    {
        ans.push_back(minh.top());
        minh.pop();
    }
    return ans;
}
