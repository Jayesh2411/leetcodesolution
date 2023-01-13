class Solution {
    public int findUnsortedSubarray(int[] nums) {
        int[] numSorted = new int[nums.length];
        for (int i = 0 ;i<nums.length;i++) {
            numSorted[i] = nums[i];
        }
        Arrays.sort(numSorted);
        int s = -1;
        int e = -1;
        for (int i = 0 ;i<nums.length;i++) {
            if(s == -1 && nums[i] != numSorted[i] ) {
                s = i;
            } else if( nums[i] != numSorted[i] ) {
                e = i;
            }
        }
        if (s == -1 || e == -1) {
            return 0;
        }
        return e-s+1;
    }
}