/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        Node* temp=head;
        if(head==NULL)
        {
            return temp;
        }
        Node* copy;
        while(temp!=NULL)
        {
            copy=temp->next;
            temp->next=new Node(temp->val);
            temp->next->next=copy;
            temp=copy;
        }
        temp=head;

        while(temp!=NULL)
        {
            copy=temp->next;
            if(temp->random!=NULL)
                copy->random=temp->random->next;
            temp=copy->next;
        }
        temp=head;
        copy=temp->next;
        Node* arbit;
        while(temp!=NULL)
        {
            arbit=temp->next;
            temp->next=arbit->next;
            temp=temp->next;
            arbit->next=temp?temp->next:NULL;
        }
        return copy;
        
        
    }
};