class Solution {
    void solve(string s, int index, string local, vector<string>& result, int fs,int last)
    {
        if(fs==3)
        {   
            if(s[index]=='0' && index+1 != s.length())
                return;
            while(s[index]!='\0')
            {
                local = local + s[index];
                ++index;
            }
            if ( stoi(local.substr( last + 1 )) <= 255)
                result.push_back(local);
            return;
        }
        for(int i = index; i < s.length() - 1 && i < index + 3; i++)
        {
            if(local.length()!=0&&local[local.length()-1]=='0'&&local[last+1]=='0')
                return;
                local = local + s[i];
            if((s.length()-i-1)<=(3-fs)*3 && stoi(local.substr( last + 1 )) <= 255)
            {
                local = local + '.';
                solve(s,i+1,local,result,fs+1,local.length()-1);
                local = local.substr(0,local.length()-1);
            }
        }   
    }
public:
     vector<string> restoreIpAddresses(string s) {
        vector<string> ret;
        string ans;
        
        for (int a=1; a<=3; a++)
        for (int b=1; b<=3; b++)
        for (int c=1; c<=3; c++)
        for (int d=1; d<=3; d++)
            if (a+b+c+d == s.length()) {
                int A = stoi(s.substr(0, a));
                int B = stoi(s.substr(a, b));
                int C = stoi(s.substr(a+b, c));
                int D = stoi(s.substr(a+b+c, d));
                if (A<=255 && B<=255 && C<=255 && D<=255)
                    if ( (ans=to_string(A)+"."+to_string(B)+"."+to_string(C)+"."+to_string(D)).length() == s.length()+3)
                        ret.push_back(ans);
            }    
        
        return ret;
    }
};