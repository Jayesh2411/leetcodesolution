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
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*> q;
        q.push(root);
        bool xF = false, yF = false;
        while(!q.empty())
        {
            int level = q.size();
            for(int i = 1; i <= level; i++)
            {
                TreeNode* temp = q.front();
                q.pop();
                if(temp->left && temp->right && (temp->left->val == x || temp->left->val == y) && (temp->right->val == x || temp->right->val == y))
                    return false;
                if(temp->val == x)
                    xF = true;
                if(temp->val == y)
                    yF = true;
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            if(xF && yF)
                return true;
            else if(xF || yF)
                return false;
        }
        return true;
    }
};