vector<long> mul(vector<long> m1, vector<long> m2)
{
    vector<long> ans(4);
    for (int i = 0; i <= 3; i++)
    {
        m1[i] %= 1000000007;
        m2[i] %= 1000000007;
    }
    ans[0] = ((m2[0] * m1[0]) % 1000000007 + (m2[2] * m1[1]) % 1000000007) % 1000000007;
    ans[1] = ((m2[1] * m1[0]) % 1000000007 + (m2[3] * m1[1]) % 1000000007) % 1000000007;
    ans[2] = ((m2[0] * m1[2]) % 1000000007 + (m2[2] * m1[3]) % 1000000007) % 1000000007;
    ans[3] = ((m2[1] * m1[2]) % 1000000007 + (m2[3] * m1[3]) % 1000000007) % 1000000007;
    return ans;
}

vector<long> foo(vector<long> arr, int n)
{
    if (n == 1)
        return arr;
    vector<long> temp = foo(arr, n / 2);
    ;
    if (n % 2 == 0)
        return mul(temp, temp);
    return mul(mul(temp, temp), arr);
}

int Solution::solve(int n)
{
    if (n <= 2)
        return 1;
    vector<long> arr = {1, 1, 1, 0};
    arr = foo(arr, n - 1);
    return arr[0] % 1000000007;
}