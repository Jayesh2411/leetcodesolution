/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        queue <TreeNode* > q;
        q.push(root);
        int depth = 0;
        while(!q.empty())
        {
            ++depth;
            int n = q.size();
            for(int i=1;i<=n;i++)
            {
                TreeNode* head = q.front();
                q.pop();
                if(head -> left == NULL && head -> right == NULL )
                    return depth;
                if(head->left)
                    q.push(head->left);
                if(head->right)
                    q.push(head->right);
            }
        }
        return depth;
    }
};