// #define m long long(1e97)
class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre(n,0),suf(n,0);
        pre[0]=nums[0];
        for(int i=1;i<n;i++){
            pre[i]=max(nums[i],pre[i-1]);
            // cout<<pre[i]<<" ";
        }
        suf[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suf[i]=max(suf[i+1],nums[i]);
            // cout<<suf[i]<<" ";
        }
        // cout<<endl;
        long long ans=0;
        for(int i=1;i<n-1;i++){
            long long temp = (static_cast<long long>(pre[i-1]-nums[i])*suf[i+1]);
            ans=max(ans, temp);
        }
        return ans;
    }
};