class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        int n = letters.size();
        int start = 0, end = n - 1;
        char ans;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (mid > 0 && letters[mid] > target && letters[mid - 1] <= target)
            {
                return letters[mid];
            }
            else if (letters[mid] <= target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return letters[0];
    }
};