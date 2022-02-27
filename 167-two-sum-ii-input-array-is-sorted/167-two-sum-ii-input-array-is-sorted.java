class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int f = 0;
        int l = numbers.length-1;
        int arr[] = new int[2];
        while(f<l) {
            if ((numbers[f] + numbers[l]) ==  target) {
                arr[0] = f+1;
                arr[1] = l+1;
                return arr;
            }
            if ((numbers[f] + numbers[l]) > target ) {
                l--;
            } else{
                f++;
            }
        }
        
        return arr;
    }
}