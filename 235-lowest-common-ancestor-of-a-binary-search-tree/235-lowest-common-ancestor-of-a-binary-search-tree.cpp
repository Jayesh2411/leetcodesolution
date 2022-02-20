/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        while(root!=NULL)
        {
        bool left = false;
        bool right = false;
        if( root->val > q->val )
            left = true;
        if( root->val < p->val )
            right = true;
        if( left == right || root->val == p->val || root->val == q->val  )
            return root;
        if( left == true )
            root = root->left;
        else
            root = root->right;
        }
        return root;
    }
};