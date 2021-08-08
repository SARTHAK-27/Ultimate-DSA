/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode *reverse_list(ListNode *head)
{
    ListNode *pre = NULL, *nex = NULL;
    while (head != NULL)
    {
        nex = head->next;
        head->next = pre;
        pre = head;
        head = nex;
    }
    return pre;
}

int Solution::lPalin(ListNode *head)
{
    if (head == NULL || head->next == NULL)
    {
        return 1;
    }

    ListNode *slow = head;
    ListNode *fast = head;

    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    slow->next = reverse_list(slow->next);
    slow = slow->next;
    while (slow != NULL)
    {
        if (head->val != slow->val)
        {
            return 0;
        }
        slow = slow->next;
        head = head->next;
    }
    return 1;
}
