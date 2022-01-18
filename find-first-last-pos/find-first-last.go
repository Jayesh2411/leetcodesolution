package main

import "fmt"

/*
34. Find First and Last Position of Element in Sorted Array
Medium

Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].
*/

func main() {
	arr := searchRange([]int{1, 2, 3, 4, 4, 4, 5, 6, 7, 8}, 4)
	fmt.Println(arr[0], ", ", arr[1])
}
func searchRange(nums []int, target int) []int {
	if len(nums) == 0 {
		return []int{-1, -1}
	}
	start := 0
	end := len(nums) - 1
	mid := (start + end) / 2
	f := -1
	l := -1
	for start <= end {
		if nums[mid] == target {
			f = mid
			l = mid
			break
		}
		if nums[mid] < target {
			start = mid + 1
		} else {
			end = mid - 1
		}

		mid = (start + end) / 2
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
	return []int{f, l}
}
