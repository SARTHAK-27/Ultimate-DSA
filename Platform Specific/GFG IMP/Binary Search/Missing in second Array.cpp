vector<long long> findMissing(long long A[], long long B[], int N, int M)
{
    unordered_set<long long> s;

    for (int i = 0; i < M; i++)
    {
        s.insert(B[i]);
    }

    vector<long long> ans;

    for (int i = 0; i < N; i++)
    {
        if (s.find(A[i]) == s.end())
        {
            ans.push_back(A[i]);
        }
    }
    return ans;
}