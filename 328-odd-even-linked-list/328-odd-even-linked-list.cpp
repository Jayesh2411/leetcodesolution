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
        ListNode* oddEnd = head;
        int n = 0;
        while(oddEnd->next->next != NULL)
        {
            ++n;
            oddEnd = oddEnd->next;
        }
        if(n%2 != 0)
            oddEnd = oddEnd->next;
        ListNode* even = new ListNode(0);
        ListNode* temp = even;
        ListNode* oddStart = head;
        while(oddStart != oddEnd)
        {
            temp->next = oddStart->next;
            oddStart->next = oddStart->next->next;
            oddStart = oddStart->next;
            temp = temp->next;
        }
        temp->next = oddStart->next;
        oddStart->next = even->next;
        return head;
    }
};