class Solution {
public:
    int numRabbits(vector<int>& a) {
        sort(a.begin(),a.end());
        int ans=0,i=0;
        while(i<a.size()){
            ans+=a[i]+1;
            int cnt = 0;
            int t=a[i];
            while(i<a.size()-1 && a[i]==a[i+1] && cnt<t){
                i++;
                cnt++;
            }
            i++;
        }
        return ans;
    }
};