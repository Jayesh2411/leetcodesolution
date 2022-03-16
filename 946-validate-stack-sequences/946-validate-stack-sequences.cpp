class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int j = 0;
        stack<int> s;
        for(int i = 0; i < pushed.size(); i++)
        {
            s.push(pushed[i]);
            while(!s.empty() && j < popped.size() && s.top() == popped[j])
            {
                s.pop();
                ++j;
            }
        }
        if(!s.empty())
            return false;
        return true;
    }
};