func searchRange(nums []int, target int) []int {
    if len(nums) == 0 {
        return []int{-1, -1}
    }
    start := 0
    end := len(nums)-1
    mid := (start+end)/2
    f := -1
    l := -1
    for start <= end {
        if nums[mid] == target {
            f = mid
            l = mid
            break
        } 
        if nums[mid] < target {
            start = mid+1
        } else {
            end = mid-1
        }
        
        mid = (start+end)/2
    }
    for f > 0 {
        if nums[f-1] == target {
            f--
        } else {
            break
        }
    }
    for l != -1 && l < len(nums)-1 {
        if nums[l+1] == target {
            l++
        } else {
            break
        }
    }
    return []int{f,l}
}