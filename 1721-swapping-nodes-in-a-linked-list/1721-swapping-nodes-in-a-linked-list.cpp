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
    ListNode* swapNodes(ListNode* head, int k) {
        int a = 1;
        ListNode* temp = head;
        while(a < k)
        {
            temp = temp->next;
            ++a;
        }
        int val = temp->val;
        ListNode* garb = temp;
        ListNode* swapOne = head;
        while(garb->next != NULL)
        {
            garb = garb->next;
            swapOne = swapOne->next;
        }
        temp->val = swapOne->val;
        swapOne->val = val;
        return head;
    }
};