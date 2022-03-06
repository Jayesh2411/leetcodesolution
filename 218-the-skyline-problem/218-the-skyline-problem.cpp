bool comp(pair<int,int> a, pair<int,int> b)
{
    if(a.first == b.first)
    {
            return a.second < b.second;
    }
    return a.first < b.first;
}
class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<vector<int>> results;
        vector<pair<int,int>> temp;
        int index = 0;
        for(int i = 0; i < buildings.size(); i++)
        {
            temp.push_back({buildings[i][0],-buildings[i][2]});
            temp.push_back({buildings[i][1],buildings[i][2]});
        }
        sort(temp.begin(),temp.end(),comp);
        multiset<int> pq;
        pq.insert(0);
        for(auto it : temp)
        {
            int maxVal = *pq.rbegin();
            if(it.second < 0)
                pq.insert(-it.second);
            else
                pq.erase(pq.find(it.second));
            if(*pq.rbegin() != maxVal)
                results.push_back({it.first,*pq.rbegin()});
        }
        return results;
        
    }
};

