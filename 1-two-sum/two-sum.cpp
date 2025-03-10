class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int i=0,j=nums.size()-1;
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        sort(nums.begin(),nums.end());
        while(i<j){
            int sum=nums[i]+nums[j];
            if(sum==target){
                int f=mp[nums[i]][0];
                int s;
                if(nums[i]==nums[j])
                s=mp[nums[i]][1];
                else
                s=mp[nums[j]][0];
                return {f,s};
            }
            
            else if(sum<target)
            i++;
            else
            j--;
        }
        return {};
    }
};