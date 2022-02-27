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
        stack<TreeNode* > store;
        long prev = LONG_MIN;
        while( root != NULL || !store.empty() )
        {
            while(root)
            {
                store.push(root);
                root=root->left;
            }
            root = store.top();
            store.pop();
            if(root->val <= prev)
                return false;
            prev = root->val;
            root=root->right;
        }
        return true;
    }
};