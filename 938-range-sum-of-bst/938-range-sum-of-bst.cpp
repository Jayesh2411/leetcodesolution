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
    int l,h;
    int inOrder;
    void inorder(TreeNode* &root)
    {
        if(root == NULL)
            return;
        inorder(root->left);
        if(root->val >= l && root->val <= h)
            inOrder += root->val;
        inorder(root->right);
    }
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        inOrder = 0;
        l = low;
        h = high;
        inorder(root);
        return inOrder;
    }
};