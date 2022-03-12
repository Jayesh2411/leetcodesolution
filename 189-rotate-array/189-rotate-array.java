class Solution {
    public void rotate(int[] nums, int k) {
        if (nums.length == 1 || nums.length == 0) {
            return;
        }
        k = k % nums.length;                                                             
    //length of first part                                                          
        int a = nums.length - k; 
        reverse(nums, 0, a-1);
        reverse(nums, a, nums.length-1);
        reverse(nums, 0, nums.length-1);
    }
    
    void reverse(int[] nums, int s, int e) {
        while(s<e) {
            int temp=nums[s];
            nums[s]=nums[e];
            nums[e] = temp;
            s++;e--;
        }
    }
}
