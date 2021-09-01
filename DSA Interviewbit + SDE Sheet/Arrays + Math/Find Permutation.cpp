vector<int> Solution::findPerm(const string A, int B)
{
    vector<int> ans;
    int fir = 1, sec = B;
    for (int i = 0; i < B - 1; i++)
    {
        if (A[i] == 'I')
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
