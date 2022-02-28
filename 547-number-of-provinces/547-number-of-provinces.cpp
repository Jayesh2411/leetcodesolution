class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int count = 0;
        int n = isConnected.size();
        vector<int> visited(n,0);
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(isConnected[i][j]==1)
                {
                    ++count;
                    queue< int > q;
                    q.push(i);
                    while( !q.empty() )
                    {
                        int r = q.front();
                        visited[r] = 1;
                        q.pop();
                        for( int k = 0; k < n ; k++)
                        {
                            if(isConnected[r][k] == 1)
                            {
                                if(!visited[k])
                                    q.push(k);
                                isConnected[r][k] = 0;
                            }
                        }
                    }
                }
            }
        }
        return count;
    }
};