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
        q.push(NULL);
        int level = 1;
        while(q.size() > 1)
        {
            for(int i = 1; i <= level; i++)
            {
                Node* temp = q.front();
                q.pop();
                if(temp->left)
                {
                    q.push(temp->left);
                    q.push(temp->right);
                }
                temp->next = q.front();
            }
            q.pop();
            q.push(NULL);
            level*=2;
        }
        return root;
    }
};