class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int k=0;k<nums.size();k++){
            if(k>0 && nums[k]==nums[k-1])
            continue;
            int i=k+1,j=nums.size()-1;
            
            while(i<j){
                int sum=nums[k]+nums[i]+nums[j];
                // cout<<sum<<endl;
                if(sum==0){
                    // if(find(ans.begin(), ans.end(), vector<int> {nums[k],nums[i],nums[j]}) == ans.end())
                    ans.push_back({nums[k],nums[i],nums[j]});
                    i++;
                    while(nums[i]==nums[i-1]&&i<j)
                    i++;
                }
                else if(sum<0)
                i++;
                else
                j--;
            }
        }
        return ans;
    }
};