class Solution {
public:
    string removeOuterParentheses(string s) {
        int oc=0,cc=0;
        string ans;
        for(char c : s){
            if(c=='(')
            oc++;
            else
            cc++;
            if(oc>1 && oc!=cc){
                ans+=c;
            }
            if(oc==cc){
                oc=0;
                cc=0;
            }
        }
        return ans;
    }
};