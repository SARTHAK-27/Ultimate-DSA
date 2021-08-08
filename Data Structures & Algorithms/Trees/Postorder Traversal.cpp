/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::postorderTraversal(TreeNode *root)
{
    vector<int> ans;
    if (root == NULL)
    {
        return ans;
    }
    stack<TreeNode *> s;
    s.push(root);

    while (!s.empty())
    {
        TreeNode *curr = s.top();
        ans.push_back(curr->val);
        s.pop();

        if (curr->left)
        {
            s.push(curr->left);
        }
        if (curr->right)
        {
            s.push(curr->right);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
