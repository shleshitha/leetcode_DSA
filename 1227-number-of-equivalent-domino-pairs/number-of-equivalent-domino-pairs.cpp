class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int n = dominoes.size();
        map<pair<int,int>,int>mp;
        int cnt=0;
        for(int i=0;i<n;i++){
            int mini=min(dominoes[i][0],dominoes[i][1]);
            int maxi = max(dominoes[i][0],dominoes[i][1]);
            mp[{mini,maxi}]++;
        }
        for(auto [i,j] : mp){
            if(j>1){
                cnt += (j*(j-1))/2;
            }
        }
        return cnt;
    }
};