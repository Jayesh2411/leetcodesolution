
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var searchRange = function (nums, target) {
    var low, high, mid;
    var min, max;
    high = nums.length - 1;
    low = 0;
    min = -1;
    max = -1;
    if (nums[low] == target) {
        min = low;
    }
    if (nums[high] == target) {
        max = high;
    }
    while (low <= high && min == -1) {
        mid = Math.floor((low + high) / 2);
        if (nums[mid] < target)
            low = mid + 1;
        else if (nums[mid] > target)
            high = mid - 1;
        else {
            if (nums[mid - 1] != target)
                min = mid;
            else
                high = mid - 1;
        }
    }

    if (min != -1) {
        high = nums.length - 1;
        low = min;
        while (low <= high && max == -1) {
            mid = Math.floor((low + high) / 2);
            if (nums[mid] < target)
                low = mid + 1;
            else if (nums[mid] > target)
                high = mid - 1;
            else {
                if (nums[mid + 1] != target)
                    max = mid;
                else
                    low = mid + 1;
            }
        }
    }
    var arr = new Array(2);
    arr[0] = min;
    arr[1] = max;
    return arr;
};
let arr = [0, 1, 1, 2, 3, 8, 8, 10, 18, 19];
let target = 8;
let result = searchRange(arr, target);
console.log(result);