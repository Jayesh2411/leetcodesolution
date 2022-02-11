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
        return isValidBST(root,
            std::numeric_limits<long>::min(),
            std::numeric_limits<long>::max());
    }
    
private:
    bool isValidBST(TreeNode* node, long min_val, long max_val) {
        
        if (nullptr == node)
            return true;
        
        const int val = node->val;
        
        return ((val > min_val) && (val < max_val)) &&
            isValidBST(node->left, min_val, val) &&
            isValidBST(node->right, val, max_val);
    }
};