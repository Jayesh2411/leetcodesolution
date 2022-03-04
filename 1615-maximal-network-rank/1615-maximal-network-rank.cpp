class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        int graph[n][n];
        vector<int> count(n,0);
        memset(graph,0,sizeof(graph));
        for( auto i : roads )
        {
            graph[i[0]][i[1]] = 1;
            graph[i[1]][i[0]] = 1; 
            count[i[0]]++;
            count[i[1]]++;
        }
        int maxNR = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                maxNR = max(int(count[i]+count[j]-graph[j][i]),maxNR);
            }
        }
        return maxNR;
    }
};