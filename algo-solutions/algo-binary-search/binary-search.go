package main

import "fmt"

func search(nums []int, target int) int {
	if len(nums) == 0 {
		return -1
	}
	mid := len(nums) / 2
	start := 0
	end := len(nums) - 1
	for start <= end {
		if nums[mid] == target {
			return mid
		}
		if nums[mid] > target {
			end = mid - 1
		} else {
			start = mid + 1
		}
		mid = (start + end) / 2
	}
	return -1
}

func main() {
	arr := []int{-1, 0, 3, 5, 9, 12}
	fmt.Println(search(arr, 13))
}
