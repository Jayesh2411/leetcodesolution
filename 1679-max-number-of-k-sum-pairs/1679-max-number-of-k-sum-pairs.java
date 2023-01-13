class Solution {
    public int maxOperations(int[] nums, int k) {
        Arrays.sort(nums);
        int c = 0;
        int l = 0; int r = nums.length-1;
        while(l<r) {
            if( (nums[l] + nums[r]) > k) {
                r--;
            }else if( (nums[l] + nums[r]) < k ){
                l++;
            } else{
                c++;
                r--;
                l++;
            
            }
        }
        return c;
    }
}