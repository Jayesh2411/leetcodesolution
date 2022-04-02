class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> arr(m,vector<int>(n,1));
        if(n==0)
            return m;
        if(m==0)
            return n;
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                arr[i][j]=arr[i-1][j]+arr[i][j-1];
            }
        }
        return arr[m-1][n-1];
    }
};