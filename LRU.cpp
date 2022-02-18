struct Node
{
    int data;
    Node* next=NULL;
};
class LRUCache
{
    private:
    Node *head = new Node();
    unordered_map<int,int> cache;
    int cap;
    int count;
    public:
    //Constructor for initializing the cache capacity with the given value.
    LRUCache(int cap)
    {
        this->cap=cap;
        count=0;
        // code here
    }
    
    //Function to return value corresponding to the key.
    int get(int key)
    {
        if(cache.find(key)==cache.end())
            return -1;
        else
            return cache[key];
    }
    
    //Function for storing key-value pair.
    void set(int key, int value)
    {
        if(count==cap)
        {
            if(cache.find(key)==cache.end())
            {
                Node* temp=head;
                Node* prev=NULL;
                while(temp->next!=NULL)
                {
                    prev=temp;
                    temp=temp->next;
                }
                prev->next=NULL;
                delete temp;
            }
            else
            {
                Node* temp=head;
                Node* prev=NULL;
                while(temp->data!=key)
                {
                    prev=temp;
                    temp=temp->next;
                }
                prev=temp->next;
                temp=prev;
            }
            --count;
        }
        else
        {
            Node *newNode=new Node();
            newNode->data=key;
            newNode->next=head->next;
            head->next=newNode;
            ++count;
            cache.insert({key,value});
        }
        // your code here   
    }
};
