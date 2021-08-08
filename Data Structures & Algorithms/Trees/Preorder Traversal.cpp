/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode *root)
{
    vector<int> ans;
    if (root == NULL)
    {
        return ans;
    }

    stack<TreeNode *> s;
    s.push(root);
    TreeNode *curr = root;

    while (!s.empty())
    {
        if (curr)
        {
            ans.push_back(curr->val);
            if (curr->right)
            {
                s.push(curr->right);
            }
            curr = curr->left;
        }
        else
        {
            curr = s.top();
            s.pop();
        }
    }
    return ans;
}
