class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int end = m + n;
        while(m!=0&&n!=0)
        {
            if(nums1[m-1]>=nums2[n-1])
                nums1[--end]=nums1[--m];
            else
                nums1[--end]=nums2[--n];
        }
        while(n!=0)
            nums1[--end]=nums2[--n];
    }
};