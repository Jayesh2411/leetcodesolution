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
        ListNode* curr = head->next;
        ListNode* temp = new ListNode(0);
        ListNode* root = temp;
        while(curr)
        {
            while(curr && prev->val == curr->val)
                curr = curr->next;
            if(prev->next == curr)
            {
                temp->next = prev;
                temp = temp->next;
            }
            else if(curr == NULL)
                break;
            else
            {
                while(curr != prev)
                {
                    ListNode* del = prev;
                    prev = prev->next;
                    delete del;
                }
            }
            prev = curr;
            if(curr->next == NULL)
            {
                temp->next = curr;
                temp = temp->next;
            }
            curr = curr->next;
        }
        temp->next = NULL;
        return root->next;
    }
};