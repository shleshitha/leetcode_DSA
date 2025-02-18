class Solution {
public:
    bool check(string pat, string s){
        for(int i=0;i<pat.size();i++){
            if(pat[i]=='I'&&s[i]>s[i+1])
            return false;
            if(pat[i]=='D'&&s[i]<s[i+1])
            return false;
        }
        return true;
    }
    void permutations(string pattern,string s,vector<string>&valid,int idx,int n){
        if(idx==n){
            if(check(pattern,s))
            {
                valid.push_back(s);
                return;
            }
        }
        for(int i=idx;i<n;i++){
            swap(s[i],s[idx]);
            permutations(pattern,s,valid,idx+1,n);
            swap(s[i],s[idx]);
        }
    }
    string smallestNumber(string pattern) {
        string s;
        int n=pattern.size();
        for(int i=1;i<=n+1;i++){
            s=s+char('0'+i);
        }
        vector<string>valid;
        permutations(pattern,s,valid,0,n+1);
        
        return valid[0];
    }
};