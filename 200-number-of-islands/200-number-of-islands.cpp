typedef pair<int,int> pii;
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int islands = 0;
        int offset[] = {0,1,0,-1,0};
        int m = grid.size(), n = grid[0].size();
        for(int i = 0; i < m ; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(grid[i][j] == '1')
                {
                    ++islands;
                    queue<pii> q;
                    q.push({i,j});
                    while(!q.empty())
                    {
                        int r = q.front().first;
                        int c = q.front().second;
                        q.pop();
                        if( grid[r][c] == '1' )
                        {
                            grid[r][c] = '0';
                            for(int k = 0; k < 4; k++)
                            {
                                int row = r + offset[k];
                                int col = c + offset[k+1];
                                if(row >= 0 && row < m && col >= 0 && col < n && grid[row][col] == '1')
                                    q.push({row,col});
                            }
                        }
                    }
                }
            }
        }
        return islands;
    }
};