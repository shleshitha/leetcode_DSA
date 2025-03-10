class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<bool>vis(nums.size()+1);
        for(int i=0;i<nums.size();i++){
            vis[nums[i]]=true;
        }
        for(int i=0;i<vis.size();i++)
        {
            if(!vis[i])
            return i;
        }
        return 0;
    }
};