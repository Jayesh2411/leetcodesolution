typedef pair<int,int> pii;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(auto i : nums)
            m[i]++;
        priority_queue<pii, vector<pii>, greater<pii> > minHeap;
        for(auto x : m)
        {
            minHeap.push({x.second,x.first});
            if(minHeap.size() > k)
                minHeap.pop();
        }
        vector<int> ans;
        while(!minHeap.empty())
        {
            ans.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return ans;        
    }
};