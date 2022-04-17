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
    TreeNode* increasingBST(TreeNode* root) {
        if(root == NULL)
            return root;
        if(root->left)
        {
            TreeNode* temp = increasingBST(root->left);
            TreeNode* left = temp;
            while(left->right)
                left = left->right;
            left->right = root;
            root->left = NULL;
            root->right = increasingBST(root->right);
            return temp;
        }
        if(root->right)
        {
            TreeNode* right = increasingBST(root->right);
            root->right = right;
            return root;
        }
        return root;
    }
};