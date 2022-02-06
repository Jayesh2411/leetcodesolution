class Solution {
    public int strStr(String haystack, String needle) {
        if (needle.trim().equals("")) {
            return 0;
        }
        if (needle.length()>haystack.length() ) {
            return -1;
        }
        
        char hayStackChars[] = haystack.toCharArray();
        char needleChars[] = needle.toCharArray();
        
        for (int i =0;i<hayStackChars.length;i++) {
            int j = 0;
            if (hayStackChars[i] == needleChars[j]) {
                boolean found = true;
                int s = i;
                i++;j++;
                while(j<needleChars.length) {
                    if (i >=hayStackChars.length){
                        found = false;
                        break;
                    }
                    if (needleChars[j] != hayStackChars[i]) {
                        i=s;
                        found = false;
                        break;
                    } else {
                        j++;
                        i++;
                    }
                }
                if (found)
                    return s;
                
            }
        }
        
        return -1;
    }
}