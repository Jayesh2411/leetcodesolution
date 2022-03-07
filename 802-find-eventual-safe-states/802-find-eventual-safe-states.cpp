class Solution {
    vector<int> result;
    bool dfs(vector<vector<int>> &graph, vector<int> &visited, int i)
    {
        if(visited[i] == 1)
            return false;
        if(visited[i] == 2)
            return true;
        visited[i] = 1;
        for(int it : graph[i])
        {
            if(visited[it] != 2 && dfs(graph,visited,it))
                result.push_back(it);
            else if(visited[it] == 1)
                return false;
        }
        visited[i] = 2;
        return true;
    }
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int> visited(graph.size(),0);
        for(int i = 0; i < graph.size(); i++)
        {
            if(visited[i] == 0)
                if(dfs(graph,visited,i))
                    result.push_back(i);
        }
        sort(result.begin(),result.end());
        return result;
    }
};