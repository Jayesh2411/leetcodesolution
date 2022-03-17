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
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* prev = head;
        head = head->next;
        ListNode* temp = new ListNode(0);
        ListNode* root = temp;
        while(head)
        {
            while(head && prev->val == head->val)
                head = head->next;
            if(head == NULL)
                break;
            if(prev->next == head)
            {
                temp->next = prev;
                temp = temp->next;
            }
            if(head->next == NULL)
            {
                temp->next = head;
                temp = temp->next;
                break;
            }
            prev = head;
            head = head->next;
        }
        temp->next = NULL;
        return root->next;
    }
};