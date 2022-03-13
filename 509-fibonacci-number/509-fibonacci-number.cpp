class Solution {
public:
    int fib(int n) {
        if(n < 2)
            return n;
        int a = 0;
        int b = 1;
        --n;
        while(n)
        {
            b = b + a;
            a = b - a;
            n--;
        }
        return b;
    }
};