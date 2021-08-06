int find(vector<string> &A, int n)
{
    int min = A[0].size();
    for (int i = 1; i < n; i++)
    {
        if (min > A[i].size())
        {
            min = A[i].size();
        }
    }

    return min;
}

string Solution::longestCommonPrefix(vector<string> &A)
{
    int n = A.size();
    string ans;
    char curr;
    int minlen = find(A, n);

    for (int i = 0; i < minlen; i++)
    {
        curr = A[0][i];
        for (int j = 1; j < n; j++)
        {
            if (curr != A[j][i])
            {
                return ans;
            }
        }
        ans.push_back(curr);
    }

    return ans;
}
