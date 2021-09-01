class Solution
{
public:
    // Basically we make a linked List and there is a duplicate so we know that there will
    // be a cycle formed so just to find the point of origin of cycle we do the fast and slow
    // pointer method also known as rabbit and tortoise method.
    // TC - O(n)
    // SC - O(1)

    int findDuplicate(vector<int> &nums)
    {
        int slow = nums[0];
        int fast = nums[0];
        do
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        fast = nums[0];
        while (slow != fast)
        {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};