class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n, m;
        n = text1.length();
        m = text2.length();
        if( n == 0 || m == 0)
            return 0;
        int curr[m+1];
        memset(curr,0,sizeof(curr));
        for( int i = 1; i <=n; i++ )
        {
            int prev = curr[0];
            for( int j = 1; j <= m; j++ )
            {
                int temp = curr[j];
                if( text1[i-1] == text2[j-1] )
                    curr[j] = 1 + prev;
                else
                    curr[j] = max( curr[j-1], curr[j]);
                prev = temp;
            }
        }
        return curr[m];
    }
};