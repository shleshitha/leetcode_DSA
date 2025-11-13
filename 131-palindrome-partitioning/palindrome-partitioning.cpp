class Solution {
public:
    bool check(string s){
        string t=s;
        reverse(t.begin(),t.end());
        return s==t;
    }
    void helper(string s, vector<vector<string>>&ans, vector<string>t, int i,string t2){
        if(i==s.size()){
            if(!t.empty()&&t2.empty())
            ans.push_back(t);
            return;
        }
        for(int j=i;j<s.size();j++){
            t2+=s[j];
            if(check(t2)){
                t.push_back(t2);
                helper(s,ans,t,j+1,"");
                t.pop_back();
            }
            // else
            // helper(s,ans,t,j+1,t2);
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>t;
        helper(s,ans,t,0,"");
        return ans;
    }
};