double Solution::findMedianSortedArrays(const vector<int> &nums1, const vector<int> &nums2)
{
    int n1 = nums1.size();
    int n2 = nums2.size();
    if (n2 > n1)
    {
        return findMedianSortedArrays(nums2, nums1);
    }
    int low = 0;
    int high = n1;
    while (low <= high)
    {
        int mid1 = (low + high) / 2;
        int mid2 = (n1 + n2 + 1) / 2 - mid1;

        int L1 = (mid1 - 1 < 0) ? INT_MIN : nums1[mid1 - 1];
        int L2 = (mid2 - 1 < 0) ? INT_MIN : nums1[mid2 - 1];
        int R1 = (mid1 == n1) ? INT_MAX : nums1[mid1];
        int R2 = (mid2 == n2) ? INT_MAX : nums2[mid2];

        if (L1 <= R2 && L2 <= R1)
        {
            if ((n1 + n2) % 2 == 0)
            {
                return ((max(L1, L2) + min(R1, R2)) / 2.0);
            }
            else
            {
                return (max(L1, L2));
            }
        }

        if (L1 > R2)
        {
            high = mid1 - 1;
        }
        if (L2 > R1)
        {
            low = mid1 + 1;
        }
    }
    return 0.0;
}