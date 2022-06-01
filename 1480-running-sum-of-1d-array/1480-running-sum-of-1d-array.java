class Solution {
    public int[] runningSum(int[] nums) {
        
        for (int i =1;i<nums.length;i++){
            int t = nums[i];
            nums[i] = nums[i-1]+t;
        }
        return nums;
    }
}