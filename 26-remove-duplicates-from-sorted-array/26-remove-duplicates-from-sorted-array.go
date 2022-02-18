func removeDuplicates(nums []int) int {
 
    for i :=0;i<len(nums)-1;i++ {
          j := i;
          for nums[j] == nums[j+1] {
              
              j++;
              if j == len(nums)-1 {
                  break;
              }
          }
          k := i+1;
          j++;
          for k<len(nums)-1 && j<len(nums) {
            nums[k] = nums[j];
            j++;k++;
          }
          
      }
    
    i:=0
    for i<len(nums)-1 {
        if nums[i]>=nums[i+1] {
            break;
        }
        i++;
    }
    return i+1;
    
}