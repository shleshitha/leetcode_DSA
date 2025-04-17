class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n=nums.size();
        long long cnt=0,ans=0;
        int i=0,j=0;
        while(j<n){
           cnt+=mp[nums[j]];
           mp[nums[j]]++;
           while(cnt>=k){
            ans+=n-j;
            mp[nums[i]]--;
            cnt-=mp[nums[i]];
            i++;
           }
           j++;
        }  
        return ans;
    }
};