class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size(),ans=0;
        for(int i=0;i<nums.size()-2;i++){
            if(!nums[i]){
                nums[i]=!nums[i];
                nums[i+1]=!nums[i+1];
                nums[i+2]=!nums[i+2];
                ans++;
            }
        }
        if(nums[n-1]==0||nums[n-2]==0)
        return -1;
        return ans;
    }
};