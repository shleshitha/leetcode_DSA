class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int,int>mp;  // remainder ans its freq
        int sum=0,ans=0;
        mp[sum]=1;
        for(int i : nums){
            sum+=i;
            int rem=sum%k;
            if(rem<0) rem+=k;
            if(mp.find(rem)!=mp.end()){
                ans+=mp[rem];
            }
            mp[rem]++;
        }
        return ans;
    }
};