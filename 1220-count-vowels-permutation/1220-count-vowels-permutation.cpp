#define MAX 1000000007
typedef long long int lli;
class Solution {
public:
    int countVowelPermutation(int n) {
        lli a,e,i,o,u;
        if( n == 1)
            return 5;
        a = e = i = o = u = 1;
        lli cA, cE, cI, cO, cU;
        for(int j = 1; j < n; j++)
        {
            cA = (e + i + u)%MAX;
            cE = (a + i)%MAX;
            cI = (e + o)%MAX;
            cO = i;
            cU = (i + o)%MAX;
            a = cA;
            e = cE;
            i = cI;
            o = cO;
            u = cU;
        }
        lli ans = (cA + cE + cO + cI + cU)%MAX;
        return ans;
    }
};