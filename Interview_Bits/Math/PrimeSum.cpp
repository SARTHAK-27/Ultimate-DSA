vector<int> Solution::primesum(int A)
{
    bool v[A + 1];
    memset(v, false, sizeof(v));
    for (int i = 2; i * i <= A; i++)
    {
        if (!v[i])
        {
            for (int j = 2; i * j < A; j++)
            {
                v[i * j] = true;
            }
        }
    }

    vector<int> res;
    for (int i = 2; i <= A / 2; i++)
    {
        if (!v[i] && !v[A - i])
        {
            res.push_back(i);
            res.push_back(A - i);
            break;
        }
    }
    return res;
}