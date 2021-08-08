int Solution::singleNumber(const vector<int> &A)
{
    int ans;
    for (int i = 0; i < A.size(); i++)
    {
        ans = ans ^ A[i];
    }
    return ans;
}
