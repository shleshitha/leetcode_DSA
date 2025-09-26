class Solution {
public:
    int check(vector<int>&nums,int sum){
        int subarrays=1,sum2=0;
        for(int x : nums){
            sum2+=x;
            if(sum2>sum){
                subarrays++;
                sum2=x;
            }
        }
        return subarrays;
    }
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            int partitions=check(nums,mid);
            if(partitions<=k){
                // if(partitions==k)
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};