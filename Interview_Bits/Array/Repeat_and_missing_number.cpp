vector<int> Solution::repeatedNumber(const vector<int> &B) 
{
    int miss = 0, repeat = 0;
    int n = B.size();
    vector<int> A = B;
    for(int i=0; i<n; i++)
    {
        if(A[abs(A[i]) - 1] > 0)
        {
            A[abs(A[i]) - 1] = -A[abs(A[i]) - 1];
        }
        else
        {
            repeat = abs(A[i]);
        }
    }
    for(int i=0; i<n; i++)
    {
        if(A[i] > 0)
        {
            miss = i+1;
        }
    }
    vector<int> ans;
    ans.push_back(repeat);
    ans.push_back(miss);
    return ans;
}
