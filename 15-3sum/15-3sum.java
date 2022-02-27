class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        Arrays.sort(nums);
        HashSet<List<Integer>> set = new HashSet<>();
        
       
        for (int i = 0; i<nums.length;i++) {
            int f = i+1;
            int l = nums.length-1;
            while(f<l) {
                 List<Integer> arr = new ArrayList<>();
                if ( (nums[f]+nums[l]+nums[i]) == 0) {
                    arr.add(nums[i]);
                    arr.add(nums[f]);
                    arr.add(nums[l]);
                    set.add(arr);
                    f++;
                    l--;
                } else if ( (nums[f]+nums[l]+nums[i]) > 0) {
                    l--;
                } else {
                    f++;
                }
            }
            
        }
        return new ArrayList<>(set);
    }
}