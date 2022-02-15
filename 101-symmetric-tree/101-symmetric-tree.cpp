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
    bool isSymmetric(TreeNode* root) {
        if ( root == NULL || ( root -> left == NULL && root -> right == NULL ) )
            return true;
        return isSymmetricHelp ( root -> left, root -> right);
    }
    bool isSymmetricHelp(TreeNode* left, TreeNode* right)
    {
        if(left == NULL || right == NULL)
            return left == right;
        if(left -> val == right -> val)
            return isSymmetricHelp ( left -> left , right -> right) && isSymmetricHelp ( left -> right , right -> left );
        else
            return false;
    }
};