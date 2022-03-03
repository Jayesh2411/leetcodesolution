class Solution {
    void dfs(vector<vector<pair<int,int>>> &graph, int k, vector<int> &visited, int ans)
    {
        for(int i = 0; i < graph[k].size(); i++)
        {
            if(visited[graph[k][i].first] > ans + graph[k][i].second)
            {
                visited[graph[k][i].first] = ans + graph[k][i].second;
                dfs(graph,graph[k][i].first,visited,visited[graph[k][i].first]);
            }
        }
    }
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        int ans = 0;
        vector<vector<pair<int,int>>> graph;
        graph.resize(n);
        for(auto a : times)
        {
            graph[a[0]-1].push_back({a[1]-1,a[2]});
        }
        vector<int> visited(n,INT_MAX);
        visited[k-1] = 0;
        dfs(graph,k-1,visited,ans);
        ans = 0;
        for(int i : visited)
            ans = max(ans,i);
        return ans == INT_MAX? -1: ans;
    }
};