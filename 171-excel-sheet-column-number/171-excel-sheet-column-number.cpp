class Solution {
public:
    int titleToNumber(string columnTitle) {
        int len = columnTitle.length();
        int num = 0;
        for(int i=0;i<len;i++)
        {
            num=num*26;
            num = num + ((int(columnTitle[i]))-64);
        }
        return num;
    }
};