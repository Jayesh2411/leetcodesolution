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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode* temp = head;
        while(temp)
        {
            ListNode* next = temp->next;
            while(next && temp->val == next->val)
                next=next->next;
            temp->next = next;
            temp = temp->next;
        }
        return head;
    }
};