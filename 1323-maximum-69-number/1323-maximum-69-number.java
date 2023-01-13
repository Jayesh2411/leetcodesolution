class Solution {
    public int maximum69Number (int num) {
        char numArr[] = String.valueOf(num).toCharArray();
        for (int i = 0;i<numArr.length;i++) {
            if (numArr[i] == '6') {
                numArr[i] = '9';
                return Integer.parseInt(String.valueOf(numArr));
            }
        }
        return num;
    }
}