/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

TreeNode *fun(const vector<int> &A, int start, int end)
{
    if (start > end)
    {
        return NULL;
    }

    int mid = start + (end - start) / 2;
    TreeNode *root = new TreeNode(A[mid]);

    root->left = fun(A, start, mid - 1);
    root->right = fun(A, mid + 1, end);

    return root;
}

TreeNode *Solution::sortedArrayToBST(const vector<int> &A)
{
    int n = A.size();
    return fun(A, 0, n - 1);
}
