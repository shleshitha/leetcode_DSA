class Solution {
public:
    int rob(vector<int>& nums) {
        int  n=nums.size();
        int first=nums[0];
        if(n==1) return first;
        int second=max(nums[0],nums[1]);
        for(int i=2;i<n;i++){
            int current=max(second,first+nums[i]);
            first=second;
            second=current;
        }
        return max(first,second);

    }
};