class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<vector<int>> ans;
        int m = grid.size(), n = grid[0].size();
        ans.resize(m, vector<int> (n));
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                ans[(i+(j+k)/n)%m][(j+k)%n] = grid[i][j];
        return ans;
    }
};