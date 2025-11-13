class Solution {
public:
    void generate(vector<int>& candidates, int target,vector<vector<int>>&ans,vector<int>&t,int i){
        if(target==0){
            ans.push_back(t);
            return;
        }
        if(target<0 || i>=candidates.size()) return;
        
        t.push_back(candidates[i]);
        generate(candidates,target-candidates[i],ans,t,i);
        // generate(candidates,target-candidates[i],ans,t,i+1);
        t.pop_back();
        generate(candidates,target,ans,t,i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>t;
        generate(candidates,target,ans,t,0);
        return ans;
    }
};