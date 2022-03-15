class Solution {
public:
    string minRemoveToMakeValid(string s) {
        queue<int> open;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '(')
                open.push(i);
            else if(s[i] == ')')
            {
                if(!open.empty())
                {
                    open.pop();
                }
                else
                    s[i] = '*';
                
            }
        }
        while(!open.empty())
        {
            s[open.front()] = '*';
            open.pop();
        }
        s.erase(remove(s.begin(), s.end(), '*'), s.end());
        return s;
    }
};