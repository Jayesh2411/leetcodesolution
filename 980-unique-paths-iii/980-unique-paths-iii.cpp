class Solution {
    int findMin(vector<vector<int>> &grid, int first, int second,int ts)
    {
        if(first < 0 || second < 0 || first >= grid.size() || second >= grid[0].size() || grid[first][second] == -1)
        {
            return 0;
        }
        if(grid[first][second] == 1)
            return 0 == ts;
        if(grid[first][second] == 0)
            --ts;
        grid[first][second] = -1;
        int ans = findMin(grid,first-1,second,ts) + findMin(grid,first,second-1,ts) + findMin(grid,first,second+1,ts) + findMin(grid,first+1,second,ts);
        grid[first][second] = 0;
        return ans;
    }
public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int ts = 0;
        int first,second;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(grid[i][j] == 2)
                {
                    first = i;
                    second = j;
                }
                if(grid[i][j] == 0)
                    ts++;
            }
        }
        return findMin(grid,first,second,ts);
    }
};