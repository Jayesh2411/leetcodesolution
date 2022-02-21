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
    bool find(TreeNode* root, TreeNode* look)
    {
        if(root==NULL)
            return false;
        if(root->val == look->val)
            return true;
        return find(root->left,look)||find(root->right,look);
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root->val==p->val||root->val==q->val)
            return root;
        bool left = find(root->left,p);
        bool right = find(root->right,q);
        if(left==right)
            return root;
        if(left == true)
            return lowestCommonAncestor(root->left,p,q);
        else
            return lowestCommonAncestor(root->right,p,q);
    }
};