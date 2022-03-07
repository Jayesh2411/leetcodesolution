class Solution {
    pair<int,int> ans;
    void dijkstra(vector<vector<pair<int,int>>> &graph, int &i,int &threshold)
    {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        vector<int> temp(graph.size(),INT_MAX);
        int src, dist;
        pq.push({0,i});
        temp[i] = 0;
        while(!pq.empty())
        {
            src = pq.top().second;
            dist = pq.top().first;
            pq.pop();
            if(dist > threshold)
                break;
            for(auto it : graph[src])
            {
                if(temp[it.first] > dist + it.second)
                {
                    temp[it.first] = dist + it.second;
                    pq.push({temp[it.first],it.first});
                }
            }
        }
        int ctr = 0;
        for(int j = 0; j < graph.size(); j++)
            if(temp[j] <= threshold)
                ++ctr;
        if(ans.second > ctr || (ans.second == ctr && ans.first < i))
            ans = {i,ctr};
    }
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        ans = {0,INT_MAX};
        vector<vector<pair<int,int>>> graph(n);
        for(auto it : edges)
        {
            graph[it[0]].push_back({it[1],it[2]});
            graph[it[1]].push_back({it[0],it[2]});
        }
        for(int i = 0; i < n; i++)
            dijkstra(graph,i,distanceThreshold);
        return ans.first;
    }
};