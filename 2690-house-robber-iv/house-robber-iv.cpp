class Solution {
public:
    bool check(vector<int>& nums, int k,int val){
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=val){
                i++;
                cnt++;
            }
        }
        return cnt>=k;
    }
    int minCapability(vector<int>& nums, int k) {
        int mini=*min_element(nums.begin(),nums.end());
        int maxi=*max_element(nums.begin(),nums.end());
        // cout<<mini<<" "<<maxi<<endl;
        int ans=-1;
        int lo=mini,hi=maxi;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(check(nums,k,mid))
            {
                ans=mid;
                hi=mid-1;
            }
            else
            lo=mid+1;
        }
        return ans;
    }
};