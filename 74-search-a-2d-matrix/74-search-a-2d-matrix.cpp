class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = 0;
        int n = matrix[0].size() - 1;
        int size = matrix.size();
        while(m < size && n >= 0)
        {
            if(matrix[m][n] == target)
                return true;
            else if(matrix[m][n] < target)
                ++m;
            else
                --n;
        }
        return false;
    }
};