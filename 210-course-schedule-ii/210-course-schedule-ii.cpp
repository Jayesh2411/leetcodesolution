class Solution {
    vector<vector<int>> graph;
    vector<int> result;
    bool findCycle(int node, short vis[])
    {
        if(vis[node] == 1)
            return false;
        vis[node]+=2;
        for(int v : graph[node] )
        {
            if(vis[v] == 2)
                return true;
            if(findCycle(v,vis))
                return true;
        }
        vis[node]--;
        result.push_back(node);
        return false;
    }
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        short vis[numCourses];
        memset(vis,0,sizeof(vis));
        graph.resize(numCourses);
        for(auto it : prerequisites)
            graph[it[0]].push_back(it[1]); 
        for(int i = 0; i < graph.size(); i++)
        {
            if(vis[i] == 0 && findCycle(i,vis))
                return {};
        }
        return result;
    }
};

