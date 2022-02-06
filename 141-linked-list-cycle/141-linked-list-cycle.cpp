/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *root = head, *temp = head;
        if(head==NULL)
            return false;
        root=head;
        temp=head;
        while((temp->next!=NULL)&&(temp->next->next!=NULL))
        {
            root=root->next;
            temp=temp->next->next;
            if(root==temp)
                return true;
        }
        return false;
    }
};