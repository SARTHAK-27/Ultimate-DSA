// Lowest Common Ancestor

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
public:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *n1, TreeNode *n2)
    {
        if (root == NULL)
        {
            return NULL;
        }
        if (root == n1 || root == n2)
        {
            return root;
        }

        TreeNode *left = lowestCommonAncestor(root->left, n1, n2);
        TreeNode *right = lowestCommonAncestor(root->right, n1, n2);

        if (left != NULL && right != NULL)
        {
            return root;
        }

        if (left != NULL)
        {
            return left;
        }
        return right;
    }
};