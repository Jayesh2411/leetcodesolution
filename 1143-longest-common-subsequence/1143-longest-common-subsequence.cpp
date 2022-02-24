class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n, m;
        n = text1.length();
        m = text2.length();
        if( n == 0 || m == 0)
            return 0;
        vector<int> prev(m + 1, 0 ), curr( m + 1, 0 );
        for( int i = 1; i <=n; i++ )
        {
            for( int j = 1; j <= m; j++ )
            {
                if( text1[i-1] == text2[j-1] )
                    curr[j] = 1 + prev[j-1];
                else
                    curr[j] = max( curr[j-1], prev[j]);
            }
            copy(curr.begin(),curr.end(),prev.begin());
        }
        return curr[m];
    }
};