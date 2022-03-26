class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        if(s1.length() + s2.length() != s3.length())
            return false;
        int i = 0, j = 0;
        vector<bool> dp(s2.length()+1);
        for(i = 0; i <= s1.length(); i++)
        {
            for(j = 0; j <= s2.length(); j++)
            {
                if(i == 0 && j == 0)
                    dp[j] = true;
                else if(i == 0)
                    dp[j] = dp[j-1] && s2[j-1] == s3[j-1];
                else if(j == 0)
                    dp[j] = dp[j] && s1[i-1] == s3[i-1];
                else
                    dp[j] = dp[j] && s1[i-1] == s3[i+j-1] || dp[j-1] && s2[j-1] == s3[i+j-1];
            }
        }
        return dp[s2.length()];
    }
};
