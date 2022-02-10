class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> result;
        int a,b;
        a=intervals[0][0];
        b=intervals[0][1];
        for(auto i:intervals)
        {
            if(i[0]>b)
            {
                result.push_back({a,b});
                a=i[0];
            }
            b=i[1]>b?i[1]:b;
        }
        result.push_back({a,b});
        return result;
    }
};