class Solution {
    void dfs(vector<vector<int>>&graph, vector<int>& quiet, int i, vector<int> &ans)
    {
        ans[i] = i;
        for(int j : graph[i])
        {
            if( ans[j] == INT_MAX )
                dfs(graph,quiet,j,ans);
            if(quiet[ans[j]] < quiet[ans[i]])
                ans[i] = ans[j];
        }
    }
public:
    vector<int> loudAndRich(vector<vector<int>>& richer, vector<int>& quiet) {
        vector<vector<int>> graph;
        graph.resize(quiet.size());
        for(auto i : richer)
            graph[i[1]].push_back(i[0]);
        vector<int> ans(quiet.size(),INT_MAX);
        for(int i = 0; i < ans.size(); i++)
        {
            if(ans[i] == INT_MAX)
                dfs(graph,quiet,i,ans);
        }
        return ans;
        
    }
};