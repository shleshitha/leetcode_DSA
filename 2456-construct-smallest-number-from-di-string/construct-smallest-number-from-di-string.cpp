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
    string smallestNumber(string pattern) {
        string s;
        int n=pattern.size();
        for(int i=1;i<=n+1;i++){
            s=s+char('0'+i);
        }
        do {
            if(check(pattern,s))
            return s;
        } while (next_permutation(s.begin(), s.end()));
        return "";
    }
};