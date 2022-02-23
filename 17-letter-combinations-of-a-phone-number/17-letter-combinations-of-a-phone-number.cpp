class Solution {
public:
    vector<string> result;
    vector<vector<char>> alpha = {{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'}};
    void numComb( string digits , int index , string local)
    {
        if( local.length() == digits.length() )
        {
            result.push_back(local);
            return;
        }
        int num = int(digits[index])-48;
        for( int i = 0 ; i < alpha[num-2].size() ; i++ )
        {
            local = local + alpha[num-2][i];
            numComb(digits,index+1,local);
            local = local.substr(0,local.length()-1);
        }
    }
    vector<string> letterCombinations(string digits) {
        string local = "";
        if( digits.length() == 0 )
            return {};
        numComb( digits , 0 , local );
        return result;
    }
};