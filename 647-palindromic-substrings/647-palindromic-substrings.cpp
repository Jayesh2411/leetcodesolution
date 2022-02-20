class Solution {
    vector<vector<int>> dp;
    int isPalindrome(string s, int i, int j)
    {
        if(i >= j)
            return 1;
        if(dp[i][j]!=-1)
            return dp[i][j];
        dp[i][j] = ( s[i] == s[j] )?isPalindrome(s,i+1,j-1):0;
        return dp[i][j];
    }
public:
    int countSubstrings(string s) {
        vector<vector<int>> tab(s.size(), vector<int>(s.size()));
        int count = 0;
        for(int i = s.size() - 1; i >= 0; --i) {
            for(int j = i; j < s.size(); ++j) {
                if (i == j) {
                    tab[i][j] = 1;
                } else if (i + 1 == j) {
                    tab[i][j] = s[i] == s[j] ? 1 : 0;
                } else {
                    tab[i][j] = s[i] == s[j] ? tab[i+1][j-1] : 0;
                }
                count += tab[i][j];
            }
        }
        return count;
    }
};