class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> rows,col;
        int i,j;
        int r = matrix.size();
        int c = matrix[0].size();
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
                if(matrix[i][j]==0)
                {
                    rows.insert(i);
                    col.insert(j);
                }
        }
        for(int i:rows)
        {
            for(j=0;j<c;j++)
                matrix[i][j]=0;
        }
        for(int j:col)
            for(i=0;i<r;i++)
                matrix[i][j]=0;
    }
};