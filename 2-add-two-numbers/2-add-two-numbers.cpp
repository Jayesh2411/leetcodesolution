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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode(0);
        ListNode* temp = result;
        int carry = 0;
        int sum = 0;
        while( l1 || l2 )
        {
            int x = 0, y = 0;
            if(l1)
            {
                x = l1->val;
                l1 = l1->next;
            }
            if(l2)
            {
                y = l2->val;
                l2 = l2->next;
            }
            sum = x + y + carry;
            carry = sum/10;
            temp->next = new ListNode(sum%10);
            temp = temp->next;
        }
        if(carry)
            temp->next = new ListNode(carry);
        return result->next;
    }
};