typedef pair<int,int> pii;
class Solution {
public:
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
        vector<vector<pii>> graph(n);
        for(auto it : meetings)
        {
            graph[it[0]].push_back({it[1],it[2]});
            graph[it[1]].push_back({it[0],it[2]});
        }
        priority_queue<pii,vector<pii>,greater<pii>> minHeap;
        minHeap.push({0,0});
        minHeap.push({0,firstPerson});
        vector<bool> visited(n,false);
        vector<int> result;
        while(!minHeap.empty())
        {
            int time = minHeap.top().first;
            int person = minHeap.top().second;
            minHeap.pop();
            if(visited[person])
                continue;
            visited[person] = true;
            result.push_back(person);
            for(auto it : graph[person])
            {
                if(visited[it.first] != true && time <= it.second)
                    minHeap.push({it.second,it.first});
            }
        }
        return result;
    }
};