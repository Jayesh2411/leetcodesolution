
class Solution {
public:
    vector<int> closestRoom(vector<vector<int>>& rooms, vector<vector<int>>& queries) {
        int index = 0;
        for(int i = 0; i < queries.size(); i++)
            queries[i].push_back(i);
        sort(queries.begin(), queries.end(), [] (auto &a, auto &b) {
            return a[1] > b[1];
        });
        sort(rooms.begin(),rooms.end(), [] (auto &a, auto &b) {
            return a[1] > b[1];
        });
        set<int> s;
        vector<int> result(queries.size(), -1);
        for(auto it : queries)
        {
            while(index < rooms.size() && rooms[index][1] >= it[1])
                s.insert(rooms[index++][0]);
            if(s.empty())
                continue;
            auto r = s.lower_bound(it[0]);
            if(r == s.end())
                --r;
            int id = *r;
            int diff = abs(id-it[0]);
            if(r != s.begin())
            {
                --r;
                int temp = abs(*r-it[0]);
                if(temp <= diff)
                    id = *r;
            }
            result[it[2]] = id;
        }
        return result;
    }
};