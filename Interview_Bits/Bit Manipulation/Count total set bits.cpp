#define MOD 1000000007
#define ll long long int

ll leftmost(ll n)
{ //function to find the leftmost set bit
    int pos = 0;
    while (n > 1)
    {
        pos++;
        n = n >> 1;
    }
    return pos;
}

ll countBits(ll n)
{
    if (n == 0)
        return 0; //if the number is 0 return 0
    ll m = leftmost(n);
    if (n == ((1 << (m + 1)) - 1))
        return ((m + 1) * (1 << m));                      //if number is of form 2^b-1 return directly
    n = n - (1 << m);                                     //if not all bits are set
    return (n + 1) + (m * (1 << (m - 1))) + countBits(n); //recursively calling for the rest of the bits
}

int Solution::solve(int n)
{
    ll result = countBits(n);
    return result % MOD;
}