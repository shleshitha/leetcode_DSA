class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        vector<int>v;
        int i=0,j=0;
        while(i<n&&j<m){
            if(nums1[i]<nums2[j]){
                v.push_back(nums1[i++]);
            }
            else{
                v.push_back(nums2[j++]);
            }
        }
        while(i<n){
            v.push_back(nums1[i++]);
        }
        while(j<m){
            v.push_back(nums2[j++]);
        }
        int len=n+m;
        if(len%2==0){
            return (v[len/2]+v[len/2-1])/2.0;
        }
        else
        return v[len/2];
    }
};