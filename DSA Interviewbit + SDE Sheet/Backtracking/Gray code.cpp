void graycodeutil(vector<int> &res, int n, int &num)
{
    if (n == 0)
    {
        res.push_back(num);
        return;
    }

    graycodeutil(res, n - 1, num);

    num = num ^ (1 << (n - 1));

    graycodeutil(res, n - 1, num);
}

vector<int> Solution::grayCode(int A)
{
    vector<int> res;
    int num = 0;
    graycodeutil(res, A, num);

    return res;
}
