int countTriplet(int arr[], int n)
{
    int count = 0;
    sort(arr, arr + n);
    for (int i = n - 1; i >= 0; i--)
    {
        int j = 0;
        int k = i - 1;
        while (j < k)
        {
            if (arr[i] == arr[j] + arr[k])
            {
                count++;
                j++;
                k--;
            }
            else if (arr[i] > arr[j] + arr[k])
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }
    return count;
}