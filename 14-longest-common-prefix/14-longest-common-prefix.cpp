class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int size;
        size = strs.size();
        if(size==0)
            return "";
        string wordBeg, wordEnd;
        sort(begin(strs),end(strs));
        wordBeg = strs[0];
        wordEnd=strs[size-1];
        if(wordBeg=="")
            return wordBeg;
        for(int i=0;wordBeg[i]!='\0';i++)
        {
            if(wordBeg[i]!=wordEnd[i])
                return wordBeg.substr(0,i);
        }
        return wordBeg;
    }
};