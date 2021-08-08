vector<int> subarraySum(int arr[], int n, int s)
{
    int sum = arr[0], i = 0;
    vector<int> ans;
    int a, b;
    for (int j = 1; j <= n; j++)
    {
        while (sum > s && i < j - 1)
        {
            sum = sum - arr[i];
            i++;
        }

        if (sum == s)
        {
            a = i + 1;
            b = j;
            ans.push_back(a);
            ans.push_back(b);
            return ans;
        }

        if (j < n)
        {
            sum = sum + arr[j];
        }
    }
    ans.push_back(-1);
    return ans;
}