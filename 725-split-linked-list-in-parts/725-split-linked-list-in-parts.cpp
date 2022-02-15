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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* temp=head;
        int n=0;
        while(temp)
        {
            temp=temp->next;
            ++n;
        }
        vector<ListNode*> ans;
        int size = 0, el = n/k, left =n%k;
        temp = head;
        while(size != k)
        {
            ListNode* Node=NULL;
            Node=temp;
            for(int i = 1; i < el; i++)
            {
               temp = temp->next;
            }
            if(left>0&&el!=0)
            {
                temp=temp->next;
                left=left-1;
            }
            ListNode* end = temp;
            if(temp)
            {    
                temp=temp->next;
                end->next=NULL;
            }
            ans.push_back(Node);
            ++size;
        }        
        return ans;
    }
        
};
