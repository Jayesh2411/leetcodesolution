class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int size,k;
        string word;
        word = strs.front();
        size = word.length();
        k=0;
        while(k<size)
        {
            for(string temp:strs)
            {
                if(temp.length()<=k)
                    return temp;
                if(word.at(k)!=temp.at(k))
                {
                    if(k==0)
                        return "";
                    return word.substr(0,k);
                }
            }
            ++k;
        }
        return word;
    }
};