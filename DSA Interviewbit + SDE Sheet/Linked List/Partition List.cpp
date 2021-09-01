/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *Solution::partition(ListNode *head, int k)
{
    ListNode *head1 = new ListNode(0);
    ListNode *head2 = new ListNode(0);
    ListNode *h1 = head1;
    ListNode *h2 = head2;

    while (head)
    {
        int v = head->val;
        if (v < k)
        {
            head1->next = head;
            head1 = head1->next;
        }
        else
        {
            head2->next = head;
            head2 = head2->next;
        }
        head = head->next;
    }
    head2->next = NULL;
    head1->next = h2->next;

    return h1->next;
}
