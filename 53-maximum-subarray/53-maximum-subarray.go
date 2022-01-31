func maxSubArray(nums []int) int {
    maxSoFar := -1 << 31
    currentMax := 0
    for i := range nums {
        currentMax += nums[i]
        if currentMax > maxSoFar {
            maxSoFar = currentMax
        }
        if currentMax < 0 {
            currentMax = 0
        }
    }
    return maxSoFar
}