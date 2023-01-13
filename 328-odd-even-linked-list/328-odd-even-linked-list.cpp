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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode* even = head->next;
        ListNode* temp = even;
        ListNode* oddStart = head;
        while(temp != NULL && temp->next != NULL)
        {
            oddStart->next = temp->next;
            oddStart = oddStart->next;
            temp->next = oddStart->next;
            temp = temp->next;
        }
        oddStart->next = even;
        return head;
    }
};