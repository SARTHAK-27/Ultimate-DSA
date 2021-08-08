int Solution::solve(vector<int> &A) 
{
    int n = A.size();
    int countarr[n+1] = {0};
    for(int i=0; i<n; i++)
    {
        if(A[i] < 0)
        {
            continue;
        }
        else if(A[i] >= n)
        {
            countarr[n]++;
        }
        else
        {
            countarr[A[i]]++;
        }
    }
    
    int total = countarr[n];
    for(int i=n-1; i>=0; i--)
    {
        if(total == i && countarr[i] > 0)
        {
            return 1;
        }
        else if(total > i)
        {
            return -1;
        }
        
        total += countarr[i];
    }
    return -1;
}
