class Solution {
public:
    int climbStairs(int n) {
        if(n < 3)
            return n;
        int twoStep = 2, oneStep = 1;
        while(n > 2)
        {
            twoStep += oneStep;
            oneStep = twoStep - oneStep;
            --n;
        }
        return twoStep;
    }
};