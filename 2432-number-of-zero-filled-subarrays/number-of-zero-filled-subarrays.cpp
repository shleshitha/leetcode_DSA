class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0,cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                while(i<nums.size()&&nums[i]==0){
                    cnt++;
                    i++;
                }
                // cout<<cnt<<endl;
                ans+=(cnt*(cnt+1))/2;
                cnt=0;
                i--;
            }
        }
        return ans;
    }
};