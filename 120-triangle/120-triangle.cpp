class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        for(int i = 1; i < triangle.size(); i++)
        {
            int temp = triangle[i-1].size();
            for(int j = 0; j < triangle[i].size(); j++)
            {
                triangle[i][j] += min(triangle[i-1][max(j-1,0)],triangle[i-1][min(j,temp-1)]);
            }
        }
        return *min_element(triangle[triangle.size()-1].begin(),triangle[triangle.size()-1].end());
    }
};