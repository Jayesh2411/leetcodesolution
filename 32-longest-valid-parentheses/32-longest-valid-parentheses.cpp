class Solution {
public:
    int longestValidParentheses(string s) {
        pair<int,int> count = {0,0};
        int longest = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '(')
                count.first++;
            else
                count.second++;
            if(count.second > count.first)
                count = {0,0};
            if(count.first == count.second && longest < count.second*2)
                longest = count.second*2;
        }
        count = {0,0};
        for(int i = s.length()-1; i >= 0; i--)
        {
            if(s[i] == '(')
                count.first++;
            else
                count.second++;
            if(count.second < count.first)
                count = {0,0};
            if(count.first == count.second && longest < count.second*2)
                longest = count.second*2;
        }
        return longest;
    }
};