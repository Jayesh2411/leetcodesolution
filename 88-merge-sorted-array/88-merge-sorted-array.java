class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int f =0;
        int s = 0;
        int nums[] = new int[m+n];
        int k =0;
        while (f < m && s < n) {
            if (nums1[f] < nums2[s]) {
                nums[k++] = nums1[f++];
            } else {
                nums[k++] = nums2[s++];
            }
            
        }
        while(f<m) {
            nums[k++] = nums1[f++];
        }
        while(s<n) {
            nums[k++] = nums2[s++];
        }
        for (int i =0;i<m+n;i++) {
            nums1[i] = nums[i];
        }
    }
}