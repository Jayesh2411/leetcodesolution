/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root)
            return NULL;
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            int level = q.size();
            for(int i = 1; i <= level; i++)
            {
                Node* temp = q.front();
                q.pop();
                if(temp->left)
                {
                    q.push(temp->left);
                    q.push(temp->right);
                }
                if(i == level)
                    temp->next = NULL;
                else
                    temp->next = q.front();
            }
        }
        return root;
    }
};