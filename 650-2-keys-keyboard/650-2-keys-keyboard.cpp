class Solution {
public:
    int minSteps(int n) {
        if(n <= 1)
            return 0;
        int op = 0;
        int num = 1;
        int copy = 0;
        while(num < n)
        {
            if( n%num == 0 && copy != num )
            {
                op+=2;
                copy = num;
                num*=2;
            }
            else
            {
                num+=copy;
                op+=1;
            }
        }
        return op;
    }
};