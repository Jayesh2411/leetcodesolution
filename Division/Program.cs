using System;
public class Solution {
    static public int Divide(int dividend, int divisor) {
        int ans = 0;
        bool numpos, denpos;
        numpos=false;
        denpos=false;
        if(dividend==0)
            return 0;
        if(dividend>0)
            numpos=true;
        if(divisor>0)
            denpos=true;
        dividend=numpos?dividend:(dividend*-1);
        divisor=denpos?divisor:(divisor*-1);
        if(divisor==1)
        {
            if(denpos!=numpos)
                dividend*=-1;
            return dividend;
        }
        while(dividend>=divisor)
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