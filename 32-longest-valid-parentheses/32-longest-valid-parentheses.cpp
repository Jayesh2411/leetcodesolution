class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int longest = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == ')')
            {
                if(st.size() == 1)
                {
                    st.pop();
                    st.push(i);
                    continue;
                }
                st.pop();
                if(i - st.top() > longest)
                    longest = i - st.top();
            }
            else
                st.push(i);
        }
        return longest;
    }
};