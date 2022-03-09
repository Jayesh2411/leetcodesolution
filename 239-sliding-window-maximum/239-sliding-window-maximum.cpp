class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> maxHeap;
        vector<int> result;
        int i = 0;
        while(maxHeap.size() < k-1)
            maxHeap.push({nums[i],i++});
        while(i < nums.size())
        {
            maxHeap.push({nums[i],i++});
            while(maxHeap.top().second < i - k)
                maxHeap.pop();
            result.push_back(maxHeap.top().first);
        }
        return result;
    }
};