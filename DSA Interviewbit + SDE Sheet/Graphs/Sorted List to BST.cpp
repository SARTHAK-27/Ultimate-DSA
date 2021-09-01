/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

int listcount(ListNode *head)
{
    ListNode *curr = head;
    int c = 0;
    while (curr)
    {
        c++;
        curr = curr->next;
    }
    return c;
}

TreeNode *Convert(ListNode *&head, int n)
{
    if (n == 0)
    {
        return NULL;
    }
    TreeNode *l = Convert(head, n / 2);

    TreeNode *root = new TreeNode(head->val);
    head = head->next;
    root->left = l;

    root->right = Convert(head, n - n / 2 - 1);

    return root;
}

TreeNode *Solution::sortedListToBST(ListNode *A)
{
    int n_nodes = listcount(A);
    return Convert(A, n_nodes);
}
