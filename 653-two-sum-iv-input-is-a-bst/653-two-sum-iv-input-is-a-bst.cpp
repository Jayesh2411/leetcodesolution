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
    bool findTarget(TreeNode* head, TreeNode* root, int k)
    {
        if(root == NULL)
            return false;
        return findTarget(head,root->right,k) || findTarget(head,root->left,k) || search(head,root,k-root->val);
    }
    bool search(TreeNode* root, TreeNode* curr, int k)
    {
        if(!root)
            return false;
        return (curr != root && root->val == k) || (root->val > k && search(root->left,curr,k)) || (root->val < k && search(root->right,curr,k));
    }
public:
    bool findTarget(TreeNode* root, int k) {
        return findTarget(root,root,k);
    }
};