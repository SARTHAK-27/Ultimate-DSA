/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void inorder(TreeNode *root, vector<int> &ans)
{
    if (!root)
    {
        return;
    }
    inorder(root->left, ans);
    ans.push_back(root->val);
    inorder(root->right, ans);
}

bool targetsum(vector<int> &nums, int k)
{
    int n = nums.size();
    for (int i = 0, j = n - 1; i < j;)
    {
        int sum = nums[i] + nums[j];
        if (sum == k)
        {
            return 1;
        }
        else if (sum > k)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return 0;
}

int Solution::t2Sum(TreeNode *root, int k)
{
    vector<int> nums;
    inorder(root, nums);
    return targetsum(nums, k);
}
