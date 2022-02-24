class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        queue<pair<TreeNode*,unsigned long long int>>q;
        q.push({root,1});TreeNode* temp;
        int size;int res=0;int d;
        while(!q.empty()){
            size=q.size();
            d= q.back().second-q.front().second+1;
            res=max(res,d);
            while(size--){
                if(q.front().first->left) q.push({q.front().first->left,(q.front().second*2)});
                if(q.front().first->right) q.push({q.front().first->right,((q.front().second*2)+1)});
                q.pop();
            }
        }
        return res;
    }
};