class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &A)
    {
        sort(A.begin(), A.end());
        vector<vector<int>> res;
        int start = A[0][0];
        int end = A[0][1];
        for (auto &i : A)
        {
            if (i[0] > end) // No Overlapping
            {
                res.push_back({start, end});
                start = i[0];
                end = i[1];
            }
            else
            {
                end = max(end, i[1]);
            }
        }
        res.push_back({start, end});
        return res;
    }
};