class Solution {
public:
    int fib(int n) {
        if(n == 0)
            return 0;
        if(n <= 2)
            return 1;
        int a = 1;
        int b = 1;
        n-=2;
        while(n)
        {
            b = b + a;
            a = b - a;
            n--;
        }
        return b;
    }
};