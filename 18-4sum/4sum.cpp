class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        // set<vector<long long>>exist;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<n;j++){
                if(j!=i+1 && nums[j]==nums[j-1]) continue;
                long long sum=nums[i]+nums[j];
                long long rem=target-sum;
                int k=j+1,l=n-1;
                while(k<l){
                    long long sum=nums[i]+nums[j];
                    long long sum2=nums[k]+nums[l];
                    if(sum2==rem){
                        ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                        k++;
                        l--;
                        while(k<l && nums[k]==nums[k-1]) k++;
                        while(k<l && nums[l]==nums[l+1]) l--;
                    }
                    else if(sum2<rem) k++;
                    else l--;
                }
            }
        }
        return ans;
    }
};