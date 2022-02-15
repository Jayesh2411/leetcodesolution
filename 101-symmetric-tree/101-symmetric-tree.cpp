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
    bool isSymmetric(TreeNode* left, TreeNode* right)
    {
        if(left == NULL || right == NULL)
            return left == right;
        if(left -> val == right -> val)
            return isSymmetric ( left -> left , right -> right) && isSymmetric ( left -> right , right -> left );
        else
            return false;
    }
public:
    bool isSymmetric(TreeNode* root) {
        if ( root == NULL || ( root -> left == NULL && root -> right == NULL ) )
            return true;
        return isSymmetric ( root -> left, root -> right);
    }
    
};