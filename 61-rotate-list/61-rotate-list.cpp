/*
 * @lc app=leetcode id=61 lang=cpp
 *
 * [61] Rotate List
 */

// @lc code=start
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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *temp, *end;
        if( head == NULL || head->next == NULL)
            return head;
        temp = head;
        end = head;
        int n = 1;
        while(temp->next!=NULL)
        {
            ++n;
            temp = temp->next;
        }
        k = k%n;
        if(k==0)
            return head;
        temp->next = end;
        for(int i = 1; i <= n-k-1; i++)
        {
            end = end->next;
        }
        ListNode *newStart = end->next;
        end->next = NULL;
        return newStart;
    }
};
// @lc code=end

