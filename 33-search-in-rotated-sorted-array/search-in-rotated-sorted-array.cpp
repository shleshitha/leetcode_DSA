class Solution {
public:
    int bs(vector<int>& nums, int lo, int hi, int target){
        while(lo<=hi){
            int mid = (lo+hi)/2;
            if(nums[mid]==target)
            return mid;
            else if(nums[mid]<target)
            lo=mid+1;
            else
            hi=mid-1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int mini=0,n=nums.size();
        int lo=0,hi=n-1;
        while(lo<=hi){
            int mid = (lo+hi)/2;
            if(nums[mid]>nums[n-1])
            lo=mid+1;
            else
            hi=mid-1;
        }
        mini=lo;
        cout<<mini<<endl;
        return max(bs(nums,0,mini-1,target),bs(nums,mini,nums.size()-1,target));
    }
};