class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int lo=0, hi=n-1;
        while(lo<hi){
            while(lo<hi && nums[lo]==nums[lo+1]) lo++;
            while(lo<hi && nums[hi]==nums[hi-1]) hi--;
            int mid = (lo+hi)/2;
            if(nums[mid]>nums[hi])
            lo=mid+1;
            else
            hi=mid;
        
        }
        return nums[hi];
    }
};