class Solution {
    public int[] plusOne(int[] digits) {
        int newDigits[] = new int[digits.length + 1];
        int carry = 1;
        for (int i = digits.length - 1; i >= 0; i--) {
            if (digits[i] + carry < 10) {
                digits[i] = digits[i] + carry;
                break;
            } else {
                newDigits[i + 1] = 0;
                digits[i] = 0;
            }
        }

        if (digits[0] == 0) {
            newDigits[0] = 1;
            return newDigits;
        }
        return digits;
    }
}