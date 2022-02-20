class Solution {
    int count;
    void PalCount(string s, int i, int j)
    {
        while ( i >= 0 && j < s.length() && s[i]==s[j])
        {
            --i;
            ++j;
            ++count;
        }
    }
public:
    int countSubstrings(string s) {
        int n = s.length();
        // initializing count as zero
        count = 0;
        for( int i = 0; i < n; i++ )
        {
            PalCount(s,i,i);
            cout<<i<<" "<<i<<" "<<count<<endl;
            PalCount(s,i,i+1);
            cout<<i<<" "<<i+1<<" "<<count<<endl;
        }
        return count; 
    }
};