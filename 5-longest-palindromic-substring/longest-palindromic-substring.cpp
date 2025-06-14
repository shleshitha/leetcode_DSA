class Solution {
public:
    string longestPalindrome(string s) {
        string ans;
        int n=s.size();
        for(int i=0;i<n;i++){
            int l=i-1,r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                l--;r++;
            }
            int len=r-l-1;
            if(len>ans.size())
            ans = s.substr(l+1,len);
            l=i,r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                l--;r++;
            }
            len=r-l-1;
            if(len>ans.size())
            ans = s.substr(l+1,len);
        }
        return ans;
    }
};