class Solution {
public:
    bool isAlphanumeric(char c)
    {
        if((c>='0'&&c<='9')||((c>=97)&&(c<=122)))
           return true;
        return false;
    }
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s;
        int i,j;
        i=0;
        j=s.length()-1;
        while(i<j)
        {
            while(!isAlphanumeric(s.at(i)))
            {
                cout<<s.at(i);
                ++i;
                if(i==j)
                    return true;
            }
            while(!isAlphanumeric(s.at(j)))
            {
                cout<<s.at(j);
                --j;
                if(i==j)
                    return true;
            }
            if(s.at(i)!=s.at(j))
                return false;
            --j;
            ++i;
        }
        return true;
    }
};