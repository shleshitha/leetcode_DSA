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
        int mini = min_element(nums.begin(),nums.end())-nums.begin();
        int n=nums.size();
        if(target<=nums[n-1])
        return bs(nums,mini,nums.size()-1,target);
        return bs(nums,0,mini-1,target);
    }
};