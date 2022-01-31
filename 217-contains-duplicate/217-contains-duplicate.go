func containsDuplicate(nums []int) bool {
    set := make(map[int]bool)
    for i := range nums {
        if set[nums[i]] {
            return true
        } else {
            set[nums[i]] = true
        }
    }
    return false
}