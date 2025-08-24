class Solution {
public:
    int bs_floor(vector<int>& nums, int target){
        int i=0,j=nums.size()-1;
        int ans=-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(nums[mid]>=target){
                if(nums[mid]==target)
                ans=mid;
                j=mid-1;
            }
            else
            i=mid+1;
        }
        return ans;
    }
    int bs_ceil(vector<int>& nums, int target){
                int i=0,j=nums.size()-1;
                        int ans=-1;
                                while(i<=j){
                                            int mid=(i+j)/2;
                                                        if(nums[mid]<=target){
                                                                        if(nums[mid]==target)
                                                                                        ans=mid;
                                                                                                        i=mid+1;
                                                                                                                    }
                                                                                                                                else
                                                                                                                                            j=mid-1;
                                                                                                                                                    }
                                                                                                                                                            return ans;
                                                                                                                                                                }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int a=bs_floor(nums,target);
        int b=bs_ceil(nums,target);
        return {a,b};
    }
};