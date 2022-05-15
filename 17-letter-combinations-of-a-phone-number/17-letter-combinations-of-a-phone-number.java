class Solution {
     public static List<String> letterCombinations(String digits) {
        if (digits == null || digits.length() == 0) {
            return new ArrayList<>();
        }

        int len = digits.length();
        String[] letters = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        Queue<String> queue = new LinkedList<>();
        queue.offer(""); //initialize size to zero
         
        for (int i = 0; i < len; i++) {
            String letter = letters[(digits.charAt(i)-'0') - 2];
            int size = queue.size();
            for (int j = 0; j < size; j++) {
                String temp = queue.poll();
                for (char ch : letter.toCharArray()) {
                    queue.offer(temp + ch);
                }
            }
        }

        return new ArrayList<>(queue);
    }
}