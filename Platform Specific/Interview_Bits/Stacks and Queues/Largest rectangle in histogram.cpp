int Solution::largestRectangleArea(vector<int> &A)
{
    int n = A.size();
    if (n == 1)
    {
        return A[0];
    }
    // Nearest Smaller to Left(NSL)

    vector<int> v1;
    stack<pair<int, int>> s1;
    int p1 = -1;

    for (int i = 0; i < n; i++)
    {
        if (s1.size() == 0)
        {
            v1.push_back(p1);
        }
        else if (s1.size() > 0 && s1.top().first < A[i])
        {
            v1.push_back(s1.top().second);
        }
        else if (s1.size() > 0 && s1.top().first >= A[i])
        {
            while (s1.size() > 0 && s1.top().first >= A[i])
            {
                s1.pop();
            }
            if (s1.size() == 0)
            {
                v1.push_back(p1);
            }
            else
            {
                v1.push_back(s1.top().second);
            }
        }
        s1.push({A[i], i});
    }

    // Nearest Smaller to Right(NSR)

    vector<int> v2;
    stack<pair<int, int>> s2;
    int p2 = n;

    for (int i = n - 1; i >= 0; i--)
    {
        if (s2.size() == 0)
        {
            v2.push_back(p2);
        }
        else if (s2.size() > 0 && s2.top().first < A[i])
        {
            v2.push_back(s2.top().second);
        }
        else if (s2.size() > 0 && s2.top().first >= A[i])
        {
            while (s2.size() > 0 && s2.top().first >= A[i])
            {
                s2.pop();
            }
            if (s2.size() == 0)
            {
                v2.push_back(p2);
            }
            else
            {
                v2.push_back(s2.top().second);
            }
        }
        s2.push({A[i], i});
    }

    reverse(v2.begin(), v2.end());

    // Width

    vector<int> w;
    for (int i = 0; i < n; i++)
    {
        w.push_back(v2[i] - v1[i] - 1);
    }

    // Area

    vector<int> area;
    for (int i = 0; i < n; i++)
    {
        area.push_back(w[i] * A[i]);
    }

    // Maximum Area
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, area[i]);
    }

    return ans;
}
