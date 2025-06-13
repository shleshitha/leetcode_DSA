class Solution {
public:
    bool bs(vector<int>& nums, int lo, int hi, int target){
        while(lo<=hi){
            int mid = (lo+hi)/2;
            if(nums[mid]==target)
            return true;
            else if(nums[mid]<target)
            lo=mid+1;
            else
            hi=mid-1;
        }
        return false;
    }
    bool search(vector<int>& nums, int target) {
        int mini=0,n=nums.size();
        int lo=0,hi=n-1;
        while(lo<hi){
            while(lo<hi && nums[lo]==nums[lo+1]) lo++;
            while(lo<hi && nums[hi]==nums[hi-1]) hi--;
            int mid = (lo+hi)/2;
            if(nums[mid]>nums[hi])
            lo=mid+1;
            else
            hi=mid;
        }
        mini=hi;
        cout<<mini<<endl;
        return bs(nums,0,mini-1,target)||bs(nums,mini,nums.size()-1,target);
    }
};