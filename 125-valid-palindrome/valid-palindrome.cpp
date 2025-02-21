class Solution {
public:
    bool check(string &t,int i, int j){
        if(i>=j)
        return true;
        if(t[i]!=t[j]) return false;
        return check(t,i+1,j-1);
    }
    bool isPalindrome(string s) {
        string t;
        for(int i=0;i<s.size();i++){
            if(s[i]>='A'&&s[i]<='Z')
            t+=(s[i]+32);
            else if(s[i]>='a'&&s[i]<='z')
            t+=s[i];
            else if(s[i]>='0'&&s[i]<='9')
            t+=s[i];
        }
        
        return check(t,0,t.size()-1);
    }
};