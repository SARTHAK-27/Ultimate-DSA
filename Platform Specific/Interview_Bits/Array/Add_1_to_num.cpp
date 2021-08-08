vector<int> Solution::plusOne(vector<int> &A)
{
    int n = A.size(), carry = 0;
    vector<int> ans;
    ans.push_back((1 + A[n - 1]) % 10); // Add one to last digit then add to new vector
    carry = (1 + A[n - 1]) / 10;        // Calculate first carry
    for (int i = n - 2; i >= 0; i--)
    {
        ans.push_back((carry + A[i]) % 10); // Add carry to digit and then push
        carry = (carry + A[i]) / 10;        // Calculate the new carry
    }
    if (carry)
    {
        ans.push_back(carry); // If carry left push it
    }
    int s = ans.size();
    for (int i = 0; i < s / 2; i++)
    {
        swap(ans[i], ans[n - 1 - i]); // Reverse the ans vector
    }
    while (ans[0] == 0)
    {
        ans.erase(ans.begin()); // Remove 0's from Left side of the first non-zero digit
    }
    return ans;
}