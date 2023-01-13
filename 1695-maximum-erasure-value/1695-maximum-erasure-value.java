class Solution {
    public int maximumUniqueSubarray(int[] nums) {
        int i = 0, j=0;
        HashSet<Integer> set = new HashSet<>();
        int max = 0, sum = 0;
        while(i<nums.length && j<nums.length) {
            
            if(!set.contains(nums[j])) {
                set.add(nums[j]);
                sum += nums[j];
                max = Math.max(max, sum);
                j++;
            } else {
                sum = sum - nums[i];
                set.remove(nums[i]);
                i++;
            }
        }
        
        return Math.max(max, sum);
    }
}