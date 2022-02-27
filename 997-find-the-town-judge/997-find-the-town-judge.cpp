class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int graph[n];
        memset(graph,0,sizeof(graph));
        for (int i = 0; i < trust.size(); i++ )
        {
            graph[trust[i][0]-1]--;
            graph[trust[i][1]-1]++;
        }
        for( int i = 0; i < n ; i++ )
            if( graph[i] == n-1 )
                return i + 1;
        return -1;
    }
};