class Solution
{
public:
    vector<vector<int>> kClosest(vector<vector<int>> &points, int k)
    {
        vector<vector<int>> res;
        priority_queue<pair<int, int>> maxh;
        int d, i = 0;
        for (auto &t : points)
        {
            d = t[0] * t[0] + t[1] * t[1];
            maxh.push(make_pair(d, i));

            if (maxh.size() > k)
            {
                maxh.pop();
            }
            i++;
        }

        while (!maxh.empty())
        {
            res.push_back(points[maxh.top().second]);
            maxh.pop();
        }

        return res;
    }
};