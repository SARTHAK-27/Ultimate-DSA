/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *Solution::solve(ListNode *head)
{
    ListNode *temp = head;
    int c0 = 0, c1 = 0;
    while (temp != NULL)
    {
        if (temp->val == 0)
        {
            c0++;
        }
        else
        {
            c1++;
        }

        temp = temp->next;
    }
    temp = head;
    for (int i = 0; i < c0 + c1; i++)
    {
        if (i < c0)
        {
            head->val = 0;
        }
        else
        {
            head->val = 1;
        }
        head = head->next;
    }
    return temp;
}
