class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int bp=-1;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                bp=i-1;
                break;
            }
        }
        if(bp==-1){
            reverse(nums.begin(),nums.end());
        }
        else{
            int nextmax=INT_MAX,idx=-1;
            for(int i=bp+1;i<nums.size();i++){
                if(nums[i]>nums[bp] && nums[i]<=nextmax){
                    nextmax=nums[i];
                    idx=i;
                }
            }
            swap(nums[bp],nums[idx]);
            reverse(nums.begin()+bp+1,nums.end());
        }
    }
};