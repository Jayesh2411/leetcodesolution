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
    TreeNode* construct(vector<int>& nums, int i, int j)
    {
        if(i > j)
            return NULL;
        int mid = i;
        for(int k = i+1; k <= j; k++)
        {
            if(nums[mid] < nums[k])
                mid = k;
        }
        TreeNode* root = new TreeNode( nums[mid] );
        root->left = construct(nums,i,mid-1);
        root->right = construct(nums,mid+1,j);
        return root;
    }
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return construct(nums,0,nums.size()-1);
    }
};