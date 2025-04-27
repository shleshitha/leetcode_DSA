class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size()-2;i++){
            int k=nums[i];
            int l=nums[i+2];
            if(k+l==nums[i+1]/2.0)
                cnt++;
        }
        return cnt;
    }
};