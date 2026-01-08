class Solution {
public:
    int rob(vector<int>& nums) {
        int first=nums[0];
        if(nums.size()<=2) return *max_element(nums.begin(),nums.end());
        int second=max(first,nums[1]);
        int ans=0;
        for(int i=2;i<nums.size()-1;i++){
            int curr=max(second,first+nums[i]);
            first=second;
            second=curr;
        }
        ans=max(ans,second);
        first=nums[1];
        second=max(first,nums[2]);
        for(int i=3;i<nums.size();i++){
            int curr=max(second,first+nums[i]);
                        first=second;
                                    second=curr;
                                            }
        ans=max(ans,second);
        return ans;
    }
};