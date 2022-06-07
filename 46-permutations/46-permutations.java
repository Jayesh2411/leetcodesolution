class Solution {
    List<List<Integer>> list = new ArrayList(new ArrayList());
    public List<List<Integer>> permute(int[] nums) {
       
        generatePermutations(nums,0,nums.length-1);
        return list;
    }
    
    void generatePermutations(int nums[],  int i, int n) {
        if(i == n) {
            List<Integer> l = IntStream.of(nums).boxed().collect(Collectors.toList());
            list.add(l);
            return;
        }
        for (int j = i;j<=n;j++) {
            swap(nums, i, j);
            generatePermutations(nums, i+1,n);
            swap(nums,i,j);
        }
    }
    
    void swap(int nums[], int i , int j) {
        int t = nums[i];
        nums[i] = nums[j];
        nums[j] = t;
    }
}

// 0 2