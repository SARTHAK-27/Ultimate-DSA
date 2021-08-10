// TC - O(n)
// SC - O(1)

int Solution::coverPoints(vector<int> &A, vector<int> &B)
{
    int ans = 0;
    int n = A.size();
    for (int i = 0; i < n - 1; i++)
    {
        ans += max(abs(B[i] - B[i + 1]), abs(A[i] - A[i + 1]));
    }
    return ans;
}

// Leetcode

class Solution
{
public:
    int minTimeToVisitAllPoints(vector<vector<int>> &points)
    {
        int ans = 0;
        for (int i = 0; i < points.size() - 1; i++)
        {
            ans += max(abs(points[i][0] - points[i + 1][0]), abs(points[i][1] - points[i + 1][1]));
        }
        return ans;
    }
};