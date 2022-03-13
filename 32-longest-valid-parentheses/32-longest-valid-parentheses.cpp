class Solution {
public:
    int longestValidParentheses(string s) {
        pair<int,int> count = {0,0};
        int longest = 0;
        for(char c : s)
        {
            if(c == '(')
                count.first++;
            else
                count.second++;
            if(count.second > count.first)
                count = {0,0};
            if(count.first == count.second && longest < count.second*2)
                longest = count.second*2;
        }
        reverse(s.begin(),s.end());
        count = {0,0};
        for(char c : s)
        {
            if(c == '(')
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