
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

vector<int> Solution::wave(vector<int> &A)
{
    int n = A.size();
    sort(A.begin(), A.end());
    for (int i = 1; i < n; i += 2)
    {
        swap(A[i], A[i - 1]);
    }
    return A;
}
