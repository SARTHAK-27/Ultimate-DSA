class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int n = digits.size();
        vector<int> ans;
        int carry = 0;

        ans.push_back((1 + digits[n - 1]) % 10);
        carry = (1 + digits[n - 1]) / 10;

        for (int i = n - 2; i >= 0; i--)
        {
            ans.push_back((carry + digits[i]) % 10);
            carry = (carry + digits[i]) / 10;
        }

        if (carry)
        {
            ans.push_back(carry);
        }

        int x = ans.size();
        for (int i = 0; i < x / 2; i++)
        {
            swap(ans[i], ans[x - i - 1]);
        }
        while (ans[0] == 0)
        {
            ans.erase(ans.begin());
        }

        return ans;
    }
};

// Recursive Approach

void sum(int arr[], int n)
{
    int i = n;
    if (arr[i] < 9)
    {
        arr[i] += 1;
        return;
    }

    arr[i] = 0;
    i--;

    sum(arr, i);
}