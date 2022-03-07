class Solution {
    vector<vector<int>> memo;
    bool isPalindrome(string s)
    {
        int i = 0, j = s.length() - 1;
        while( i < j)
        {
            if(s[i] != s[j])
                return false;
            ++i;
            --j;
        }
        return true;
    }
    int palpart(string &s, int i, int j)
    {
        if(i == j)
            return 0;
        if(memo[i][j] != -1)
            return memo[i][j];
        if(isPalindrome(s.substr(i,j-i+1)))
            return memo[i][j] = 0;
        int ans = 2000;
        for(int k = i + 1; k <= j; k++)
        {
            if(isPalindrome(s.substr(i,k-i)))
            {
                memo[k][j] = palpart(s,k,j);
                int temp = 1 + memo[k][j];
                ans = min(temp,ans);
            }
        }
        return memo[i][j] = ans;
    }
public:
    int minCut(string s) {
        memo.resize(s.length(), vector<int> (s.length(), -1));
        return palpart(s,0,s.length()-1);
    }
};