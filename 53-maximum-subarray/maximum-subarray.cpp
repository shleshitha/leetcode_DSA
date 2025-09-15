class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=INT_MIN, ans=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum=max(0,sum)+nums[i];
            ans=max(ans,sum);
        }
        return ans;
    }
};