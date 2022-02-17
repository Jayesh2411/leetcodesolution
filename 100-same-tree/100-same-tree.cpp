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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if( p == NULL && q == NULL )
            return true;
        queue < TreeNode* > qT;
        qT.push(p);
        qT.push(q);
        while(!qT.empty())
        {
            TreeNode* pVal = qT.front();
            qT.pop();
            TreeNode* qVal = qT.front();
            qT.pop();
            if ( pVal == NULL || qVal == NULL )
                return false;
            if( pVal->val != qVal->val )
                return false;
            if ( pVal->left || qVal->left )
            {
                qT.push(pVal->left);
                qT.push(qVal->left);
            }
            if( pVal->right || qVal->right )
            {
                qT.push(pVal->right);
                qT.push(qVal->right);
            }
        }
        return true;
    }
};