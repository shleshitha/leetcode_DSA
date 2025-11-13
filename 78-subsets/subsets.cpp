class Solution {
public:
    void generate(vector<int>& nums,vector<vector<int>>&ans,vector<int>t,int i){
        if(i>=nums.size()){
            ans.push_back(t);
            return;
        }
        generate(nums,ans,t,i+1);
        t.push_back(nums[i]);
        generate(nums,ans,t,i+1);
        t.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>t;
        generate(nums,ans,t,0);
        return ans;
    }
};