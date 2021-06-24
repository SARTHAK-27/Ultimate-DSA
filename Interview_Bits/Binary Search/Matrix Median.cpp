int Solution::findMedian(vector<vector<int>> &A)
{
    int r = A.size();
    int c = A[0].size();
    int req = (r * c + 1) / 2;
    int minA = INT_MAX;
    int maxA = INT_MIN;

    for (int i = 0; i < r; i++)
    {
        minA = min(minA, A[i][0]);
        maxA = max(maxA, A[i][c - 1]);
    }

    while (minA < maxA)
    {
        int mid = minA + (maxA - minA) / 2;
        int p = 0;
        for (int i = 0; i < r; i++)
        {
            p += upper_bound(A[i].begin(), A[i].end(), mid) - A[i].begin();
        }

        if (p < req)
        {
            minA = mid + 1;
        }
        else
        {
            maxA = mid;
        }
    }
    return minA;
}
