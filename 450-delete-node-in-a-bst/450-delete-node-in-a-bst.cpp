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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL)
            return NULL;
        if(root->val == key)
        {
            if(root->left == NULL)
                return root->right;
            TreeNode* temp = root->left;
            while(temp->right)
            {
                temp = temp->right;
            }
            temp->right = root->right;
            root->right = NULL;
            return root->left;
        }
        root->right = deleteNode(root->right,key);
        root->left = deleteNode(root->left,key);
        return root;
    }
};