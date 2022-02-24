/*
 * @lc app=leetcode id=65 lang=cpp
 *
 * [65] Valid Number
 */

// @lc code=start
int what(char c)
{
    if(c >= 48 && c <= 57)
        return 0;
    if(c == '+' || c== '-' )
        return 1;
    if(c=='e'||c=='E')
        return 2;
    if(c=='.')
        return 3;
    else
        return 4;
}
class Solution {
public:
    bool isNumber(string s) {
        bool e = false;
        bool dec = false;
        int curr, prev = -1;
        bool num = false;
        for(int i = 0; i < s.length(); i++)
        {
            curr = what(s[i]);
            switch(curr) {
                case 0:
                    num = true;
                    break;
                case 1:
                    if((prev!=2&&prev!=-1) || i + 1 == s.length() || what(s[i+1]) == 2)
                        return false;
                    break;
                case 2:
                    if( !num || e || (prev!=0&&prev!=3) || i + 1 == s.length() || what(s[i+1]) > 1 )
                        return false;
                    e = true;
                    break;
                case 3:
                    if( dec || e || prev>1 || s.length()==1)
                        return false;
                    dec = true;
                    break;
                case 4:
                    return false;
            }
            prev = curr;            
        }
        return num;
    }
};
// @lc code=end

