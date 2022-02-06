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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *tempA, *tempB;
        tempA=headA;
        tempB=headB;
        int m,n;
        int i,j;
        m=0;
        n=0;
        while(tempA!=NULL) {
            ++m;
            tempA = tempA -> next;
        }
        while(tempB!=NULL) {
            ++n;
            tempB = tempB -> next;
        }
        tempA = headA;
        tempB = headB;
        if(m<n)
        {
            for(i=0;i<n-m;i++)
                tempB=tempB->next;
        }
        else
            for(i=0;i<m-n;i++)
                tempA=tempA->next;
        while(tempA!=NULL)
        {
            if(tempA==tempB)
                return tempA;
            tempA=tempA->next;
            tempB=tempB->next;
        }
        return NULL;
    }
};