class Solution {
    public int minPartitions(String n) {
        char nums[] = n.toCharArray();
        int max = 0;
        for (int i = 0;i<nums.length;i++) {
            if (nums[i]-'0' > max) {
                max = nums[i]-'0';
            }
        }
        
        return max;
    }
}