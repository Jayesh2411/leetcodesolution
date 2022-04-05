class Solution {
    bool foundOne = false;
    bool findValid(string &s, int i, int j)
    {
        if(i >= j)
            return true;
        if(s[i] == s[j])
            return findValid(s,i+1,j-1);
        if(foundOne)
            return false;
        foundOne = true;
        return findValid(s,i+1,j) || findValid(s,i,j-1);
    }
public:
    bool validPalindrome(string s) {
        return findValid(s,0,s.length()-1);
    }
};