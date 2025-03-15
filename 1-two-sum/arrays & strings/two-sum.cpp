class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int i=0,j=nums.size()-1;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int x=target-nums[i];
            if(mp.find(x)!=mp.end() && mp[x]!=i)
            return {i,mp[x]};
        }
        
        return {};
    }
};
