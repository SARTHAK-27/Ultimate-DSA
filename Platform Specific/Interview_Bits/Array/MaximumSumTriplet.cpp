int getvalue(set<int>& lowervalue, int& n)
{
    auto it = lowervalue.lower_bound(n);
    --it;

    return (*it);
}

int Solution::solve(vector<int> &arr) 
{
    int n = arr.size();
    int Maxsufff[n+1];
    Maxsufff[n] = 0;
    for(int i=n-1; i>=0; i--)
    {
        Maxsufff[i] = max(Maxsufff[i+1],arr[i]);
    }

    set<int> lowervalue;
    lowervalue.insert(INT_MIN);
    int ans = 0;
    
    for(int i=0; i<n-1; i++)
    {
        if(Maxsufff[i+1] > arr[i])
        {
            ans = max(ans , getvalue(lowervalue,arr[i])+arr[i]+Maxsufff[i+1] );
            lowervalue.insert(arr[i]);
        }
    }
    return ans;
}
