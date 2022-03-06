class Solution {
public:
    int maxArea(vector<int>& height) {
        int water = 0;
        int i = 0, j = height.size() - 1, h = 0;
        while (i < j) {
            if(min(height[i],height[j]) > h)
            {
                h = min(height[i],height[j]);
                water = max(water, (j - i) * h);
            }
            if(height[i] < height[j])
                ++i;
            else
                --j;
        }
        return water;
    }
};