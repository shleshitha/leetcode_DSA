class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(), m=nums2.size();
        if(n>m) return findMedianSortedArrays(nums2,nums1);
        int left = (n+m+1)/2;
        int lo=0,hi=n;
        while(lo<=hi){
            int mid1=(lo+hi)/2;
            int mid2=left-mid1;
            int l1 = (mid1-1)>=0 ? nums1[mid1-1] : INT_MIN;
            int l2 = (mid2-1)>=0 ? nums2[mid2-1] : INT_MIN;
            int r1 = (mid1)<n ? nums1[mid1] : INT_MAX;
            int r2 = (mid2)<m ? nums2[mid2] : INT_MAX;
            if(l1<=r2 && l2<=r1){
                if((n+m)%2==0){
                    return (max(l1,l2)+min(r1,r2))/2.0;
                }
                else
                return max(l1,l2);
            }
            else if(l1>r2){
                hi=mid1-1;
            }
            else
            lo=mid1+1;
        }
        return 0;
    }
};