class Solution {
    public int[] sortArrayByParity(int[] nums) {
        int evenIndex  = 0;
        for (int i =0;i<nums.length;i++) {
            if (nums[i] %2 == 0) {
                swap(nums,i,evenIndex);
                evenIndex++;
            }
        }
        
        return nums;
    }
    
    void swap(int[] nums, int i, int j) {
        int t = nums[i];
        nums[i] = nums[j];
        nums[j] = t;
    }
}