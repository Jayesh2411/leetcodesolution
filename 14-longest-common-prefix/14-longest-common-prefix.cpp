class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int size,i=0;
        size = strs.size();
        if(size==0)
            return "";
        string wordBeg, wordEnd;
        sort(begin(strs),end(strs));
        wordBeg = strs[0];
        wordEnd=strs[size-1];
        if(wordBeg=="")
            return wordBeg;
        while(i<wordBeg.length() && wordBeg[i]==wordEnd[i])
            ++i;
        return wordBeg.substr(0,i);
    }
};