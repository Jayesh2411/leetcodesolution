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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> tree;
        vector<int> level;
        if(root==NULL)
            return tree;
        level.push_back(root->val);
        tree.push_back(level);
        queue<TreeNode*> q;
        q.push(root); 
        int l = 1;
        while(!q.empty())
        {
            level.clear();
            l = q.size();
            cout<<q.size();
            for(int i = 1; i <= l; i++)
            {
                root = q.front();
                q.pop();
                if(root->left)
                {
                    level.push_back(root->left->val);
                    q.push(root->left);
                }
                if(root->right)
                {
                    level.push_back(root->right->val);
                    q.push(root->right);
                }
            }
            if(level.size()>0)
                tree.push_back(level);
           
        }
        reverse(tree.begin(),tree.end());
        return tree;
    }
};