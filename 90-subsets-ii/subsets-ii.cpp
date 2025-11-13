class Solution {
public:
    void generate(vector<int>& nums, vector<vector<int>>&ans, vector<int>&t, int i){
        if(i>=nums.size()){
            ans.push_back(t);
            return;
        }
        t.push_back(nums[i]);
        generate(nums,ans,t,i+1);
        t.pop_back();
        int j=i+1;
        while(j<nums.size() && nums[j]==nums[i])
            j++;
        generate(nums,ans,t,j);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>t;
        generate(nums,ans,t,0);
        return ans;
    }
};