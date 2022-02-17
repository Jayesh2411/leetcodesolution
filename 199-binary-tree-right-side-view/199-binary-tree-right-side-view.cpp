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
    vector<int> result;
    void rightPush( TreeNode* head, int level )
    {
        if(head==NULL)
            return;
        if(level==result.size())
            result.push_back(head->val);
        rightPush(head->right,level+1);
        rightPush(head->left,level+1);
    } 
public:
    vector<int> rightSideView(TreeNode* head) {
        rightPush(head,0);
        return result;
    }
};