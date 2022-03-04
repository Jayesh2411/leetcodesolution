class Solution {
public:
    int maxArea(vector<int>& height) {
        int water = 0;
        int i = 0, j = height.size() - 1;
        while (i < j) {
            water = max(water, (j - i) * min(height[i],height[j]));
            if(height[i] < height[j])
                ++i;
            else
                --j;
        }
        return water;
    }
};