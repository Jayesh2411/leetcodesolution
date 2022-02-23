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
        if( s.length() > 12 )
            return {};
        vector<string> result;
        int index = 0, fs = 0;
        solve(s,0,"",result,0,-1);
        return result;
    }
};