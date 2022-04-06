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
    unordered_set<int> s;
    bool found = false;
public:
    bool findTarget(TreeNode* root, int k) {
        if(root == NULL)
            return false;
        if(found || s.find(k-root->val)!=s.end())
        {
            found = true;
            return found;
        }
        s.insert(root->val);
        return findTarget(root->right,k) || findTarget(root->left,k);
    }
};