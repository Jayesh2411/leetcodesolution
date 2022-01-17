using System;
public class Solution {
    static public int Divide(int dividend, int divisor) {
int ans = 0;
        int INTMAX=2147483647;
        int INTMIN=-2147483648;
        int numpos, denpos;
        numpos=1;
        denpos=1;
        if(dividend==0)
            return 0;
        if(dividend<0)
            numpos=-1;
        if(divisor<0)
            denpos=-1;
        dividend=dividend*numpos*-1;
        divisor=divisor*denpos*-1;
        if(divisor==-1)
        {
            if(denpos==numpos)
            {
                if(dividend==INTMIN)
                    dividend=INTMAX;
                else
                    dividend*=-1;
            }
            return dividend;
            
        }
        while(dividend<=divisor)
        {
            dividend-=divisor;
            ++ans;
        }
        if(numpos!=denpos)
            ans=ans*-1;
        return ans;
    }
    static public void Main(String[] args)
    {
        int dividend=10;
        int divisor=3;
        Console.WriteLine(Divide(dividend,divisor));
    }
}