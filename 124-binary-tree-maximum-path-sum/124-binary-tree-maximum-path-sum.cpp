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
    int max_sum=INT_MIN;
    int max_gain(TreeNode* root)
    {
        if(!root)return 0;
        int l=max_gain(root->left);
        int r=max_gain(root->right);
        int temp = max(root->val,root->val+max(l,r));
        int new_price=max(root->val+l+r,temp);
        max_sum=max(max_sum,new_price);
        return temp;
    }
    int maxPathSum(TreeNode* root) {
        max_gain(root);
        return max_sum;
    }
};