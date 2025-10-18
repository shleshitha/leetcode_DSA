class Solution {
public:
    string reverseWords(string s) {
        string t="";
        vector<string>v;
        for (char c : s){
            if(c==' ' && t!=""){
                v.push_back(t);
                t="";
                continue;
            }
            if(c!=' ')
            t+=c;
        }
        if(t!="")
        v.push_back(t);
        string ans="";
        for(int i=v.size()-1;i>=0;i--){
            ans+=v[i];
            if(i>0)
            ans+=" ";
        }
        return ans;
    }
};