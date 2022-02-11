class Solution {
public:
    bool isDigit(char c)
    {
        if(c>=48&&c<=57)
            return true;
        return false;
    }
    int myAtoi(string s) {
        int i=0;
        while(s[i]==' '&&i<s.length())
            ++i;

        int sign=1;
        if(s[i]=='-')
        {
            sign = -1;
            ++i;
        }
        else if(s[i]=='+')
            ++i;
        
        if(i==s.length())
            return 0;
        long ret=0;
        while(isDigit(s[i]))
        {
            ret=ret*10+s[i]-48;
            if(ret>INT_MAX)
            if(sign==1)
                return INT_MAX;
            else
                return INT_MIN;
            ++i;
        }
        
        return int(ret*sign);
    }
};