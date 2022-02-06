class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int size,i=0;
        size = strs.size();
        if(size==0)
            return "";
        sort(begin(strs),end(strs));
        if(strs[0]=="")
            return strs[0];
        while(i<strs[0].length() && strs[0][i]==strs[size-1][i])
            ++i;
        return strs[0].substr(0,i);
    }
};