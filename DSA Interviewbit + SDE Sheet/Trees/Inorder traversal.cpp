// Left Root Right

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode *root)
{
    vector<int> ans;
    stack<TreeNode *> s;
    TreeNode *curr = root;

    while (curr != NULL || s.empty() == false)
    {
        if (curr)
        {
            s.push(curr);
            curr = curr->left;
        }
        else
        {
            TreeNode *temp = s.top();
            ans.push_back(temp->val);
            s.pop();
            curr = temp->right;
        }
    }
    return ans;
}
