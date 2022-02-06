class Solution {
public:
    bool isValid(string s) {
        stack<char> store;
        char top;
        for(char& c:s)
        {
            if(c=='{'||c=='('||c=='[')
                store.push(c);
            else
            {
                if(store.empty())
                    return false;
                top = store.top();
                switch(c)
                {
                    case ')':
                        if(top!='(')
                            return false;
                            break;
                    case ']':
                        if(top!='[')
                            return false;
                            break;
                    case '}':
                        if(top!='{')
                            return false;
                            break;
                }
                store.pop();
            }
        }
        return store.empty();
    }
};