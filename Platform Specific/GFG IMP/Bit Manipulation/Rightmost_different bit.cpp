class Solution
{
public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        int XOR_V = m ^ n;

        return log2(XOR_V & -XOR_V) + 1;
    }
};