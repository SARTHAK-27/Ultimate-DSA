int Solution::findMinXor(vector<int> &A)
{
    int n = A.size();
    int val = 0;
    int minxor = INT_MAX;
    sort(A.begin(), A.end());
    for (int i = 0; i < n; i++)
    {
        val = A[i] ^ A[i + 1];
        minxor = min(minxor, val);
    }
    return minxor;
}
