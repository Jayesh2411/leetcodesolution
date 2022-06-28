class Solution {
    public int minDeletions(String s) {
        HashMap <Character, Integer> map = new HashMap<>();
        List<Integer> list  =new ArrayList<>();
        
        
        for(int i = 0;i<s.length();i++) {
            char ch = s.charAt(i);
            if (map.containsKey(ch)) {
                map.put(ch, map.get(ch)+1);
                
                
            } else {
                map.put(ch, 1);
            }
        }
        for (Integer i : map.values() ){
            list.add(i);
        }
        int c  = 0 ;
        list.sort(Collections.reverseOrder());
        for(int i =1;i<list.size();i++ ) {
            
            while (list.get(i) != 0 && list.get(i) >= list.get(i-1) ) {
                list.set(i, list.get(i)-1);
                c++;
            }
            
        }
        return c;
    }
}