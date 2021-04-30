void reverse(vector<int> &V)
{
    int i = 0;
    int j = V.size() - 1;
    while (i < j)
    {
        swap(V[i], V[j]);
        i++;
        j--;
    }
}

void Solution::rotate(vector<vector<int>> &A)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int r = A.size();
    int c = A[0].size();
    for (int i = 0; i < r; i++)
    {
        for (int j = i; j < c; j++)
        {
            swap(A[i][j], A[j][i]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        reverse(A[i]);
    }
}