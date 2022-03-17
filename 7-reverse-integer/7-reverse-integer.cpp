
class Solution {
public:
    int reverse(int x) {
        bool negative = true;
        if(x / 10 == 0)
            return x;
        if(x > 0)
        {
            negative = false;
            x *= -1;
        }
        int answer = 0;
        while(x%10 == 0)
            x = x/10;
        while(x != 0)
        {
            int temp = x%10;
            x = x/10;
            if((INT_MIN - temp)/10 > answer)
                return 0;
            answer = answer*10 + temp;
        }
        return negative?answer:answer*-1;
    }
};