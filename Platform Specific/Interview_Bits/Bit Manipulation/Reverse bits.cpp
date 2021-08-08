unsigned int Solution::reverse(unsigned int A)
{
    unsigned int rev = 0;
    for (int i = 31; i >= 0; i--)
    {
        if (A & (1 << i))
        {
            rev += (1 << (31 - i));
        }
    }
    return rev;
}
