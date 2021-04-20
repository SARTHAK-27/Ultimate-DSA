class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {
        int n = heights.size();
        // NSL
        vector<int> left;
        stack<pair<int, int>> s1;
        int p_l = -1;
        for (int i = 0; i < n; i++)
        {
            if (s1.size() == 0)
            {
                left.push_back(p_l);
            }
            else if (s1.size() > 0 && s1.top().first < heights[i])
            {
                left.push_back(s1.top().second);
            }
            else if (s1.size() > 0 && s1.top().first >= heights[i])
            {
                while (s1.size() > 0 && s1.top().first >= heights[i])
                {
                    s1.pop();
                }
                if (s1.size() == 0)
                {
                    left.push_back(p_l);
                }
                else
                {
                    left.push_back(s1.top().second);
                }
            }
            s1.push({heights[i], i});
        }

        // NSR
        vector<int> right;
        stack<pair<int, int>> s2;
        int p_r = n;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s2.size() == 0)
            {
                right.push_back(p_r);
            }
            else if (s2.size() > 0 && s2.top().first < heights[i])
            {
                right.push_back(s2.top().second);
            }
            else if (s2.size() > 0 && s2.top().first >= heights[i])
            {
                while (s2.size() > 0 && s2.top().first >= heights[i])
                {
                    s2.pop();
                }
                if (s2.size() == 0)
                {
                    right.push_back(p_r);
                }
                else
                {
                    right.push_back(s2.top().second);
                }
            }
            s2.push({heights[i], i});
        }
        reverse(right.begin(), right.end());

        // Calculate Width Array
        vector<int> width;
        for (int i = 0; i < n; i++)
        {
            width.push_back(right[i] - left[i] - 1);
        }

        // Calculate Area Array
        vector<int> area;
        for (int i = 0; i < n; i++)
        {
            area.push_back(width[i] * heights[i]);
        }

        // Calculate maximum area
        int ans = 0;
        for (auto x : area)
        {
            if (x > ans)
            {
                ans = x;
            }
        }

        return ans;
    }
};