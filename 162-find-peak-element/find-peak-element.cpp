class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int lo=0,hi=nums.size()-1;
        while(lo<hi){
            int mid = (lo+hi)/2;

            if(mid<hi && nums[mid]>nums[mid+1]){
                hi=mid;
            }
            else if (nums[mid]<nums[mid+1])
            lo=mid+1;
        }
        return hi;
    }
};