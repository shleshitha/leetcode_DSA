class Solution {
public:
    void generate(int n,vector<string>&ans,int oc,int cc,string t){
        if(oc==n && cc==oc){
            ans.push_back(t);
            return;
        }
        if(oc<n)
        generate(n,ans,oc+1,cc,t+'(');
        if(cc<oc)
        generate(n,ans,oc,cc+1,t+')');
    }
    vector<string> generateParenthesis(int n) {
        int oc=0,cc=0;
        vector<string>ans;
        generate(n,ans,oc,cc,"");
        return ans;
    }
};