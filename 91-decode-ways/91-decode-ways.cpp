class Solution {
    vector<int> dp;
    int decode(string &s, int i)
    {
        if(i > s.length())
            return 0;
        if(i == s.length())
            return 1;
        if(dp[i] != -1)
            return dp[i];
        if(s[i] == '0')
            dp[i] = 0;
        else if(s[i]-'0' == 1 || (s[i] == '2' && s[i+1] - '0' <= 6))
        {
            dp[i] = decode(s,i+1) + decode(s,i+2);
        }
        else
            dp[i] = decode(s,i+1);
        return dp[i];
    }
public:
    int numDecodings(string s) {
        if(s[0] == '0')
            return 0;
        dp.resize(s.length(),-1);
        return decode(s,0);
    }
};