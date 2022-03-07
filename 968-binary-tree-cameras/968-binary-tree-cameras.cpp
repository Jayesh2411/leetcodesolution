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
    vector<int> count(TreeNode* root)
    {
        if(root == NULL)
            return {0,0,99999};
        vector<int> left = count(root->left);
        vector<int> right = count(root->right);
        int mL12 = min(left[1],left[2]);
        int mR12 = min(right[1],right[2]);
        int d0 = left[1] + right[1];
        int d1 = min(left[2]+mR12,right[2]+mL12);
        int d2 = min(left[0],mL12) + min(right[0],mR12) + 1;
        return {d0,d1,d2};
        
    }
public:
    int minCameraCover(TreeNode* root) {
        vector<int> temp = count(root);
        return min(temp[1],temp[2]);
    }
};