class Solution {
    public int maxArea(int[] height) {
        int maxArea = 0;
        int start = 0, end = height.length-1;
        //two pointer strategy
        //start from extremes, and keep increasing, decreasing start end based on higher height
        while (start < end) {
            int currentArea = Math.min(height[start], height[end])*(end-start);
            maxArea = Math.max(maxArea, currentArea);
            if (height[start] < height[end]) {
                start++;
            } else {
                end--;
            }
        }
        return maxArea;
    }
}