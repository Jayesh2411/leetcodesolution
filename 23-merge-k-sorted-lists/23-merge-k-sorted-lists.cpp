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
typedef pair<int,ListNode*> pi;
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pi, vector<pi>, greater<pi>> minHeap;
        for(auto i : lists)
        {
            while(i)
            {
                minHeap.push({i->val,i});
                i=i->next;
            }
        }
        ListNode* newMerge = new ListNode(100);
        ListNode* Node = newMerge;
        while(!minHeap.empty())
        {
            Node->next = minHeap.top().second;
            Node=Node->next;
            minHeap.pop();
        }
        return newMerge->next;
    }
};