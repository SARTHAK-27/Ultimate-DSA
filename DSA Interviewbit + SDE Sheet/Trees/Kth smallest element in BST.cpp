/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int val;
int ans;
void fun(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    fun(root->left);
    val--;
    if (val == 0)
    {
        ans = root->val;
    }
    fun(root->right);
}

int Solution::kthsmallest(TreeNode *A, int B)
{
    val = B;
    fun(A);
    return ans;
}
