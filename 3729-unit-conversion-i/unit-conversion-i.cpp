class Solution {
public:
    vector<int> baseUnitConversions(vector<vector<int>>& conversions) {
        int n=conversions.size()+1;
        vector<vector<pair<int,int>>>v(n);
        
        for(auto i : conversions){
            int x=i[0],y=i[1],z=i[2];
            v[x].push_back({y,z});
        }
        queue<int>q;
        q.push(0);
        vector<int>ans(n,0);
        ans[0]=1;
        int mod = 1e9+7;
        while(!q.empty()){
            int x=q.front();
            q.pop();
            for(auto [y,z] : v[x]){
                ans[y]=(1LL*ans[x]*z)%mod;
                q.push(y);
            }
        }
        return ans;
    }
};