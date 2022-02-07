class Solution {
public:
    int titleToNumber(string columnTitle) {
        int len = columnTitle.length();
        int num = 0;
        for(int i=0;i<len;i++)
        {
            num = num + pow(26,len-i-1)*((int(columnTitle[i]))-64);
        }
        return num;
    }
};