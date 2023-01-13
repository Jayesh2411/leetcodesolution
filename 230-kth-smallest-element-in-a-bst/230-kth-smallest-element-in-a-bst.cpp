class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        priority_queue<int> maxHeap;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* head = q.front();
            q.pop();
            if(head->left)
                q.push(head->left);
            if(head->right)
                q.push(head->right);
            maxHeap.push(head->val);
            if(maxHeap.size()>k)
                maxHeap.pop();
        }
        return maxHeap.top();
    }
};