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
    bool isValidBST(TreeNode* root) {
        bool left,right;
        left = true;
        right = true;
        if(root->left!=NULL)
        {
            if(maxDepth(root->left)>=root->val)
                return false;
            left= isValidBST(root->left);
        }
        if(root->right)
        {
            if(minDepth(root->right)<=root->val)
                return false;
            right = isValidBST(root->right);
        }
        return left&right;
    }
    int maxDepth(TreeNode* root)
    {
        if(root->right!=NULL)
            return max(maxDepth(root->right),root->val);
        if(root->left!=NULL)
            return max(maxDepth(root->left),root->val);
        return root->val;
    }
    int minDepth(TreeNode* root)
    {
        if(root->left!=NULL)
            return min(minDepth(root->left),root->val);
        if(root->right!=NULL)
            return min(minDepth(root->right),root->val);
        return root->val;
    }
};