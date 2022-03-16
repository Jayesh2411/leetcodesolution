class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        int med1,med2;
        bool m1 = false, m2 = false;
        int n = nums1.size()+nums2.size();
        int ans = 0;
        if(n%2 == 0)
        {
            med1 = n/2;
            med2 = med1 - 1;
        }
        else
            med1 = med2 = (n-1)/2;
        while((i < nums1.size() || j < nums2.size()) && !(m1 && m2))
        {
            if(i == nums1.size() || (j != nums2.size() && nums1[i] > nums2[j]))
            {
                if(i + j == med1){
                    ans += nums2[j];
                    m1 = true;
                }
                if(i + j == med2){
                    ans += nums2[j];
                    m2 = true;
                }
                ++j;
            }
            else
            {
                if(i + j == med1){
                    ans += nums1[i];
                    m1 = true;
                }
                if(i + j == med2){
                    ans += nums1[i];
                    m2 = true;
                }
                ++i;
            }
        }
        
        return double(ans)/2;
    }
};