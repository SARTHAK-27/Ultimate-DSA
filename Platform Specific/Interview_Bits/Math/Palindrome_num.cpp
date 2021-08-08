int Solution::isPalindrome(int A)
{
    if (A < 0)
    {
        return false;
    }
    int original = A;
    int reversed = 0;
    int r;
    while (A != 0)
    {
        r = A % 10;
        reversed = reversed * 10 + r;
        A /= 10;
    }
    if (original == reversed)
    {
        return true;
    }
    else
    {
        return false;
    }
}
