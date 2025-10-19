class Solution {
public:
    int maxDepth(string s) {
        int ans=0,cnt=0;
        for(char c : s){
            if(c=='(')
            cnt++;
            else if(c==')')
            cnt--;
            ans=max(ans,cnt);
            // cout<<c<<" "<<cnt<<endl;
        }
        return ans;
    }
};