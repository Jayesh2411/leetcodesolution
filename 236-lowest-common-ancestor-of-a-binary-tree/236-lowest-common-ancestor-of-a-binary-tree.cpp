/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    unordered_map<string,bool> map;
    bool find(TreeNode* root, TreeNode* look)
    {   
        if(root==NULL)
            return false;
        string key = to_string(root->val)+"_"+to_string(look->val);
        if(map.find(key)!=map.end())
            return map[key];
        if(root->val == look->val)
            map.insert({key,true});
        else
            map.insert({key,find(root->left,look)||find(root->right,look)});
        return map[key];
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root->val==p->val||root->val==q->val)
            return root;
        bool left = find(root->left,p);
        bool right = find(root->right,q);
        if(left==right)
            return root;
        if(left == true)
            return lowestCommonAncestor(root->left,p,q);
        else
            return lowestCommonAncestor(root->right,p,q);
    }
};