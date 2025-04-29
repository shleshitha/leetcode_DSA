class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        // unordered_map<int,int>mp;
        int maxi = *max_element(nums.begin(),nums.end());
        cout<<maxi<<endl;
        long long i=0,j=0,n=nums.size(),ans=0,cnt=0;
        while(j<n){
            if(nums[j]==maxi)
            cnt++;
            while(cnt>=k){
                ans+=n-j;
                if(nums[i]==maxi)
                cnt--;
                i++;
            }
            j++;
        }
        return ans;
    }
};