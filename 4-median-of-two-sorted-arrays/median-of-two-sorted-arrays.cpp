class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        if(n>m) return findMedianSortedArrays(nums2,nums1);
        int low=0,high=n;
        int half=(n+m)/2;
        while(low<=high){
            int farr=(low+high)/2;
            int l1=farr-1<0?INT_MIN:nums1[farr-1];
            int r1=farr>=n ? INT_MAX:nums1[farr];
            int sarr=half-farr;
            int l2=sarr-1<0?INT_MIN:nums2[sarr-1];
            int r2=sarr>=m ? INT_MAX:nums2[sarr];
            if(l1<=r2 && l2<=r1){
                if((n+m)%2==0){
                    return (max(l1,l2)+min(r1,r2))/2.0;
                }
                else
                return (double)min(r1,r2);
            }
            if(l1<=r2){
                low=farr+1;
            }
            else
            high=farr-1;
        }
        return 0;
    }
};