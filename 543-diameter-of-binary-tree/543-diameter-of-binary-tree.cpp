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
    int findDiameter(TreeNode* root, int &res)
    {
        if(root == NULL)
            return 0;
        int l = findDiameter(root->left,res);
        int r = findDiameter(root->right,res);
        int temp = 1 + max(l,r);
        res = max(res,1+l+r);
        return temp;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int res = INT_MIN;
        findDiameter(root,res);
        return res-1;
    }
};