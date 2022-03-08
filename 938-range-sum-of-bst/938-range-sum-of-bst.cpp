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
    void inorder(TreeNode* root, vector<int> &inOrder)
    {
        if(root == NULL)
            return;
        inorder(root->left,inOrder);
        inOrder.push_back(root->val);
        inorder(root->right,inOrder);
    }
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int> inOrder;
        inorder(root,inOrder);
        int i = 0, sum = 0;
        while(inOrder[i] < low && i < inOrder.size())
            ++i;
        while(inOrder[i] <= high && i < inOrder.size())
        {
            sum += inOrder[i];
            ++i;
        }
        return sum;
    }
};