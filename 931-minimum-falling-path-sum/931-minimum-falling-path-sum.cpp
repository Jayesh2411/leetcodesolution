class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& A) {
        int n = A.size();
        for(int i = 1; i < A.size(); i++)
            for(int j = 0; j < A[0].size(); j++)
                A[i][j] += min(min(A[i-1][j],A[i-1][max(j-1,0)]),A[i-1][min(n-1,j+1)]);
        return *min_element(A[n-1].begin(),A[n-1].end());
    }
};