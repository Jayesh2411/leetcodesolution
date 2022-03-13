class Solution {
    bool isPalindrome(string s)
    {
        int i = 0;
        int j = s.length()-1;
        while(i < j)
        {
            if(s[i] != s[j])
                return false;
            ++i;
            --j;
        }
        return true;
    }
public:
    string longestPalindrome(string s) {
        if(s.length() < 2)
            return s;
        pair<int,int> sol = {0,0};
        vector<int> dp(s.length(),0);
        int n = s.length();
        for(int i = n; i > 0; i--)
        {
            int prev = 0;
            for(int j = 1; j <= n; j++)
            {
               int temp = dp[j-1];
                if( s[i-1] == s[j-1])
                {
                    dp[j-1] = 1 + prev;
                    if(dp[j-1] > sol.first && (abs(j-i) == dp[j-1]-1))
                        sol = {dp[j-1],j-dp[j-1]};
                }
                else
                    dp[j-1] = 0;
                prev = temp;
            }
        }
        return s.substr(sol.second,sol.first);
    }
};