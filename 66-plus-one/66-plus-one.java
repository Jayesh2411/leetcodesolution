class Solution {
    public int[] plusOne(int[] digits) {
        int newDigits[] = new int[digits.length + 1];
        int val = digits[digits.length - 1];
        if (val + 1 < 10) {
            digits[digits.length - 1] = val + 1;
        } else {
            newDigits[digits.length] = 0;
            digits[digits.length - 1] = 0;
            int carry = 1;

            for (int i = digits.length - 2; i >= 0; i--) {
                if (digits[i] + carry < 10) {
                    digits[i] = digits[i] + carry;
                    break;
                } else {
                    digits[i] = 0;
                }
            }
        }
        if (digits[0] == 0) {
            newDigits[0] = 1;
            return newDigits;
        }
        return digits;
    }
}