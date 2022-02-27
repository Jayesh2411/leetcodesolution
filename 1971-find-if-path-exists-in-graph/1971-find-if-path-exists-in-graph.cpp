class Solution {
    vector<int> parents;
    int findParents(int node)
    {
        return node == parents[node]?node:findParents(parents[node]);
    }
    void group(int u, int v)
    {
        int pu = findParents(u);
        int pv = findParents(v);
        parents[pu]=pv;
        
    }
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        parents.resize(n,0);
        for(int i = 0; i < n; i++ )
            parents[i]=i;
        for(auto e : edges)
        {
            group(e[0],e[1]);
        }
        return findParents(source) == findParents(destination);
    }
};