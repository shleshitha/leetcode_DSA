class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        long long ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int j = lower_bound(nums.begin()+i+1,nums.end(),lower-nums[i])-nums.begin();
            int k = upper_bound(nums.begin()+i+1,nums.end(),upper-nums[i])-nums.begin();
            k--;
            cout<<j<<" "<<k<<endl;
            if(j>i&&k>i)
            ans+=(k-j)+1;
        }
        return ans;
    }
};