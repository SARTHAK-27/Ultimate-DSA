class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int result = 0;
        for (int n : nums)
        {
            result ^= n;
        }
        return result;
    }
};

//XOR
// a^a = 0
// a^0 = a