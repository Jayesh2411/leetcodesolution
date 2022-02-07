class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> arr;
        int i,j;
        int row, col;
        row = matrix.size();
        col=matrix[0].size();
        vector<vector<int>> dir = {{0,1},{1,0},{0,-1},{-1,0}};
        int iDir = 0;
        int nSteps[] = {col,row-1};
        if(row==0||col==0)
            return arr;
        int ir,ic;
        ir=0; ic=-1;
        while(nSteps[iDir%2])
        {
            j=iDir%2;
            for(i=0;i<nSteps[j];++i)
            {
                ir += dir[iDir][0];
                ic += dir[iDir][1];
                arr.push_back(matrix[ir][ic]);
            }
            nSteps[j]--;
            iDir++;
            iDir=iDir%4;
        }
        return arr;
    }
};