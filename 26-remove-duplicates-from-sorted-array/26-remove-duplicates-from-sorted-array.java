class Solution {
    public int removeDuplicates(int[] nums) {
        int count = 0;
        for (int i = 0; i < nums.length - 1; i++) {
            int k = 1;
            if (i + count >= nums.length - 1) {
                break;
            }
            while (i + k < nums.length && nums[i] == nums[i + k]) {
                count++;
                k++;
            }
            int in = i + 1;
            for (int j = i + k; j < nums.length; j++) {
                int temp = nums[in];
                nums[in] = nums[j];
                nums[j] = temp;
                in++;
            }
        }
        return nums.length - count;
    }
}