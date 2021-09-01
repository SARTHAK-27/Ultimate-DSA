string Solution::getPermutation(int A, int B)
{
    string ans;
    vector<int> nums;
    B--;

    for (int i = 1; i <= A; i++)
    {
        nums.push_back(i);
    }

    vector<long long int> fact(A + 1, 0);
    fact[0] = 1;

    for (long long int i = 1; i <= A; i++)
    {
        fact[i] = min((i * fact[i - 1]), (long long int)INT_MAX);
    }

    while (nums.size() != 0)
    {
        int n = nums.size();
        int pos = B / fact[n - 1];
        B = B % fact[n - 1];
        ans += to_string(nums[pos]);
        nums.erase(nums.begin() + pos);
    }

    return ans;
}