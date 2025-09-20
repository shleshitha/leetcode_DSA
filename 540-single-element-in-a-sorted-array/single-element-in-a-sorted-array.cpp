class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        int ans=-1;
        while(i<j){
            int mid=(i+j)/2;
            if(mid%2==1)
            mid--;
            if(nums[mid]!=nums[mid+1]){
                j=mid-1;
            }
            else
            i=mid+2;
        }
        return nums[i];
    }
};