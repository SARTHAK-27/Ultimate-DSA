class Solution
{
public:
    bool isPalindrome(const int &x)
    {

        if (x < 0)
        {
            return false;
        }

        long int y = 0;
        int z = x;

        while (z > 0)
        {
            y += z % 10;
            z /= 10;
            if (z > 0)
            {
                y *= 10;
            }
        }

        return y == x;
    }
};