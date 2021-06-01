void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
string Solution::solve(string A) 
{
    int n = A.size();
    int i,j;
    for(i=n-1; i>0; i--)
    {
        if(A[i-1] < A[i])
        {
            break;
        }
    }
    if(i == 0)
    {
        return "-1";
    }
    int x = A[i-1], smallest = i;
    for(j=i+1; j<n; j++)
    {
        if(A[j]>x && A[j]<A[smallest])
        {
            smallest = j;
        }
    }
    swap(&A[smallest] , &A[i-1]);
    sort(A.begin()+i , A.end());
    
    return A;
}
