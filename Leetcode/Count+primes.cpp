class Solution
{
public:
    int countPrimes(int n)
    {
        if (n == 0 || n == 1)
        {
            return 0;
        }
        vector<int> ans;
        //int count=0;
        vector<bool> prime(n + 1, false);
        for (int i = 2; i * i < n; i++)
        {
            if (prime[i] == false)
            {
                for (int j = i * i; j <= n; j += i)
                {
                    prime[j] = true;
                }
            }
        }

        for (int i = 2; i < n; i++)
        {
            if (prime[i] == false)
            {
                ans.push_back(i);
            }
        }
        return ans.size();
    }
};