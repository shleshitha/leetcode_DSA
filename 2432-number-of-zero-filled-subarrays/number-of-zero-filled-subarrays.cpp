class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0,cnt=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==0&&nums[i+1]!=0){
                cnt++;
                // cout<<cnt<<endl;
                ans+=(cnt*(cnt+1))/2;
                cnt=0;
            }
            else if(nums[i]==0)
            cnt++;
            
        }
        if(nums[nums.size()-1]==0){
            cnt++;
            ans+=(cnt*(cnt+1))/2;
        }
        return ans;
    }
};