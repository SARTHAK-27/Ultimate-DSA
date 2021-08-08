vector<int> Solution::findPerm(const string A, int B) 
{
    int fir=1,sec=B;
    vector<int>ans;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]=='I')
        {
            ans.push_back(fir++);
        }
        else
        {
            ans.push_back(sec--);
        }
    }
    ans.push_back(sec);
    return ans;
}
