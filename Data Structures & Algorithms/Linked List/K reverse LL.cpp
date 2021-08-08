/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* head, int k) 
{
    if(head == NULL || k == 1)
    {
        return head;
    }
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode *cur = dummy, *pre = dummy, *nex = dummy;
    int count = 0;
    while(cur->next != NULL)
    {
        count++;
        cur = cur->next;
    }

    while(count >= k)
    {
        cur = pre->next;
        nex = cur->next;
        for(int i=1; i<k; i++)
        {
            cur->next = nex->next;
            nex->next = pre->next;
            pre->next = nex;
            nex = cur->next;
        }
        pre = cur;
        count = count-k;
    }

    return dummy->next;
}
