class Solution {
    public String addBinary(String a, String b) {
           String max,min;
           if (a.length() >= b.length()) {
               max = a;
               min = b;
           } else{
               max = b;
               min = a;
           }
           String res[] = new String[1000];
           int k = 0;
           int carry = 0;
           int maxLen = max.length()-1;
           for (int i = min.length()-1;i>=0;i--) {
               int val = Integer.parseInt(String.valueOf(max.charAt(maxLen-k)))+Integer.parseInt(String.valueOf(min.charAt(i)))+carry;
               int currCarry = 0;
               if (val == 2) {
                   val = 0;
                   currCarry = 1;
               } else if (val == 3) {
                   val = 1;
                   currCarry=1;
               } else if (val == 1) {
                   currCarry = 0;
               }
               carry = currCarry;
               res[k++] = String.valueOf(val);

           }
           int j = max.length()-k-1;
           for (;j>=0;j--) {
               int val = Integer.parseInt(String.valueOf(max.charAt(j)))+carry;
               int currCarry = 0;
               if (val == 2) {
                   val = 0;
                   currCarry = 1;
               } else if (val == 3) {
                   val = 1;
                   currCarry=1;
               } else {
                   currCarry = 0;
               }
               carry = currCarry;

               res[k++] = String.valueOf(val);

           }
           if (carry == 1) {
               res[k++] = "1";
           }
           String str = "";
           while (--k >= 0) {
               str += res[k];
           }

           return str;
       }
}