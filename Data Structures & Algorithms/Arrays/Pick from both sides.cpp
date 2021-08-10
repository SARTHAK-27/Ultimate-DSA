// TC - O(B)
// SC - 0(1)

int Solution::solve(vector<int> &A, int B)
{
    int n = A.size();
    int total = 0;
    for (int i = 0; i < B; i++)
    {
        total += A[i];
    }
    int best = total;
    for (int i = B - 1, j = n - 1; ~i; i--, j--)
    {
        total += A[j] - A[i];
        best = max(total, best);
    }
    return best;
}
