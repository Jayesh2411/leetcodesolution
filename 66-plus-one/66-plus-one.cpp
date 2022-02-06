class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=0;
        reverse(digits.begin(),digits.end());
        digits[0]=digits[0]+1;
        carry=digits[0]/10;
        digits[0]=digits[0]%10;
        for(int i=1;i<digits.size();i++)
        {
            digits[i]=digits[i]+carry;
            carry=digits[i]/10;
            digits[i]=digits[i]%10;
        }
        if(carry==1)
            digits.push_back(carry);
        reverse(digits.begin(),digits.end());
        return digits;
    }
};