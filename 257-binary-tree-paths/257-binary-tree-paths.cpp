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
typedef pair<TreeNode* ,string> pts;
class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        stack<pts> store;
        store.push( { root , to_string( root->val ) } );
        vector< string > sol;
        while( !store.empty() )
        {
            string curr = store.top().second;
            TreeNode* head = store.top().first;
            store.pop();
            if( head->right == NULL && head->left == NULL )
            {
                sol.push_back(curr);
                continue;
            }
            if( head->left )
                store.push({head->left, curr + "->" + to_string( head->left->val )});
            if( head->right )
                store.push({head->right, curr + "->" + to_string( head->right->val )});
        }
        return sol;                       
    }
};