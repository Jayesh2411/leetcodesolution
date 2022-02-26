class Solution {
    vector<vector<int>> graph;
    bool findCycle(int node, int vis[])
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
        return false;
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int vis[numCourses];
        memset(vis,0,sizeof(vis));
        graph.resize(numCourses);
        for(auto it : prerequisites)
            graph[it[0]].push_back(it[1]); 
        for(int i = 0; i < graph.size(); i++)
        {
            if(vis[i] == 0 && findCycle(i,vis))
                return false;
        }
        return true;
    }
};

