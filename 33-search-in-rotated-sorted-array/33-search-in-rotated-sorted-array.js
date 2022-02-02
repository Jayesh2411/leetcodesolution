/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */

var pivot = function(nums) {
    if(nums[0]<=nums[nums.length-1])
        return 0;
    var low,high,mid,prev;
    low=0;
    high=nums.length-1;
    while(low<=high){
        mid=parseInt((low+high)/2);
        console.log(mid);
        if(nums[mid-1]>nums[mid])
            return mid;
        else if(nums[mid]>nums[high])
            ++low;
        else
            --high;
            
    }
}
var search = function(nums, target) {
    var k,i,low,mid,high;
    var temp;
    k = pivot(nums);
    var len = nums.length;
    console.log(k);
    low = k;
    high = len+k-1;
    while(low<=high) {
        
        mid = parseInt((low + high)/2);
        if(mid>=len)
            temp=mid-len;
        else
            temp=mid;
        if(target == nums[temp])
            return temp;
        if(target > nums[temp])
            low = mid+1;
        if(target < nums[temp])
            high = mid-1;
    }
    return -1;
};

//2 0 1 4 4 1