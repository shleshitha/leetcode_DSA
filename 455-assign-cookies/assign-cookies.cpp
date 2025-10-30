class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end(),greater<int>());
        sort(s.begin(),s.end(),greater<int>());
        int m=g.size(),n=s.size();
        int ans=0,i=0,j=0;
        while(i<m && j<n){
            if(s[j]>=g[i]){
                ans++;
                i++;
                j++;
            }
            else
            i++;
        }
        return ans;
    }
};