int Solution::cntBits(vector<int> &A)
{
    long ans = 0; // Initialize result
    int n = A.size();

    // traverse over all bits
    for (int i = 0; i < 32; i++)
    {
        // count number of elements with i'th bit set
        long count = 0;
        for (int j = 0; j < n; j++)
            if ((A[j] & (1 << i)))
                count++;

        // Add "count * (n - count) * 2" to the answer
        ans += (count * (n - count) * 2);
    }

    return ans % 1000000007;
}