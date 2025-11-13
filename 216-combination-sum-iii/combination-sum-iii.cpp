class Solution {
public:
    void helper(int val,int k,int n,vector<vector<int>>&ans,vector<int>&t){
        if(t.size()==k){
            if(n==0)
            ans.push_back(t);
            return;
        }
        if(val>9||n<0) return;
        t.push_back(val);
        helper(val+1,k,n-val,ans,t);
        t.pop_back();
        helper(val+1,k,n,ans,t);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>t;
        helper(1,k,n,ans,t);
        return ans;
    }
};