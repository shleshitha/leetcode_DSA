class Solution {
public:
    int numberOfSubstrings(string s) {
        int i=0,j=0,n=s.size(),prev=-1;
        unordered_map<char,int>mp;
        int ans=0;
        while(j<n){
            if(prev!=j){
                mp[s[j]]++;
                prev=j;
            }
            if(mp.size()==3){
                ans+=n-j;
                mp[s[i]]--;
                if(mp[s[i]]==0)
                mp.erase(s[i]);
                i++;
            }
            else
            j++;
        }
        return ans;
    }
};