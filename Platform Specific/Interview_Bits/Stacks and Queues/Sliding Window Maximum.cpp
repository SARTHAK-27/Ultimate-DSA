#include <list>
vector<int> Solution::slidingMaximum(const vector<int> &A, int B)
{
    int i = 0, j = 0;
    list<int> l;
    vector<int> ans;

    while (j < A.size())
    {
        while (l.size() > 0 && l.back() < A[j])
        {
            l.pop_back();
        }
        l.push_back(A[j]);
        if ((j - i + 1) < B)
        {
            j++;
        }
        else if ((j - i + 1) == B)
        {
            ans.push_back(l.front());
            if (l.front() == A[i])
            {
                l.pop_front();
            }
            i++;
            j++;
        }
    }
    return ans;
}
