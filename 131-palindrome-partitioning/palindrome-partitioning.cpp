class Solution {
public:
    bool check(string s){
        int n=s.size();
        int i=0,j=n-1;
        while(i<n/2 && s[i]==s[j]){
            i++;
            j--;
        }
        return i==n/2;
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
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>t;
        helper(s,ans,t,0,"");
        return ans;
    }
};