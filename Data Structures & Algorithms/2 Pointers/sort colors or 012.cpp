class Solution
{
public:
    void sortColors(vector<int> &A)
    {
        int n = A.size();
        int l = 0;
        int h = n - 1;
        int m = 0;
        while (m <= h)
        {
            switch (A[m])
            {
            case 0:
                swap(A[l++], A[m++]);
                break;
            case 1:
                m++;
                break;
            case 2:
                swap(A[m], A[h--]);
                break;
            }
        }
    }
};