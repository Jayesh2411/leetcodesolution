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
 12 5 7 10 2
 */
class Solution {
    void InOrder(TreeNode* root)
    {
        if(root == NULL)
            return;
        InOrder(root->left);
        if( firstEl == NULL && prev->val > root->val )
            firstEl = prev;
        if( firstEl!= NULL && prev->val > root->val )
            secondEl = root;
        prev=root;
        InOrder(root->right);
    }
public:
    TreeNode *firstEl,*secondEl;
    TreeNode *prev = new TreeNode(INT_MIN);
    void recoverTree(TreeNode* root) {
        InOrder(root);
        int temp = firstEl->val;
        firstEl->val = secondEl->val;
        secondEl->val = temp;
        
    }
};