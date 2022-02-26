class Solution {
    vector<vector<int>> graph;
    vector<bool> vis,covered;
    bool findCycle(int node)
    {
        vis[node]=covered[node]=true;
        for(int v : graph[node] )
        {
            if(covered[v])
                return true;
            if(!vis[v]&&findCycle(v))
                return true;
        }
        covered[node]=false;
        return false;
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vis.resize(numCourses,false);
        covered.resize(numCourses,false);
        graph.resize(numCourses);
        for(auto it : prerequisites)
            graph[it[0]].push_back(it[1]); 
        for(int i = 0; i < graph.size(); i++)
        {
            if(!vis[i] && findCycle(i))
                return false;
        }
        return true;
    }
};

