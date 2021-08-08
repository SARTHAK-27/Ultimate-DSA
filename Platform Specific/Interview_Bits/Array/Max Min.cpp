int Solution::solve(vector<int> &A) 
{
    int mx = INT_MIN;
    int mn = INT_MAX;

    for(int i=0; i<A.size(); i++)
    {
        if(mx < A[i])
        {
            mx = A[i];
        }

        if(mn > A[i])
        {
            mn = A[i];
        }
    }
    return mx+mn;
}
