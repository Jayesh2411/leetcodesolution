class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        if(triangle.size() == 1)
            return triangle[0][0];
        int ans = INT_MAX;
        for(int i = 1; i < triangle.size(); i++)
        {
            int temp = triangle[i-1].size();
            for(int j = 0; j < triangle[i].size(); j++)
            {
                triangle[i][j] += min(triangle[i-1][max(j-1,0)],triangle[i-1][min(j,temp-1)]);
                if(i == triangle.size()-1)
                    ans = min(ans,triangle[i][j]);
            }
        }
        return ans;
    }
};