/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode *beforeHead = new ListNode(0);
        ListNode *afterHead = new ListNode(0);
        ListNode *after = afterHead;
        ListNode *before = beforeHead;
        while( head != NULL )
        {
            if( head->val < x )
            {
                beforeHead->next = head;
                beforeHead = beforeHead->next;
            }
            else
            {
                afterHead->next = head;
                afterHead = afterHead->next;
            }
            head = head->next;
        }
        afterHead->next = NULL;
        beforeHead->next = after->next;
        return before->next;
    }
};