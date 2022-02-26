class Solution {
    vector<vector<int>> graph;
    bool findCycle(int node, bool vis[], bool covered[])
    {
        if(covered[node])
            return true;
        if(vis[node])
            return false;
        vis[node]=covered[node]=true;
        for(int v : graph[node] )
        {

            if(findCycle(v,vis,covered))
                return true;
        }
        covered[node]=false;
        return false;
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        bool vis[numCourses];
        bool covered[numCourses];
        memset(vis,false,sizeof(vis));
        memset(covered,false,sizeof(covered));
        graph.resize(numCourses);
        for(auto it : prerequisites)
            graph[it[0]].push_back(it[1]); 
        for(int i = 0; i < graph.size(); i++)
        {
            if(!vis[i] && findCycle(i,vis,covered))
                return false;
        }
        return true;
    }
};

