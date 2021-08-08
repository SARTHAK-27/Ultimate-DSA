int Solution::solve(int A) 
{
    int target = abs(A);
    int sum = 0, ans = 0;
    while (sum < target || (sum - target) % 2 != 0) 
    {
        ans++;
        sum += ans;
    }
    return ans;
}