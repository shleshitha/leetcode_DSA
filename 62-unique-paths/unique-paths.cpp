class Solution {
public:
    int h(vector<vector<int>>& dp,int i, int j,int n,int m){
        if(i<0 || j<0 || i>=n || j>=m)
        return 0;
        if(dp[i][j]==0){
            dp[i][j]=h(dp,i-1,j,n,m)+h(dp,i,j-1,n,m);
        }
        return dp[i][j];
    }
    int uniquePaths(int n, int m) {
        // int n=grid.size(), m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,0));
        dp[0][0]=1;
        return h(dp,n-1,m-1,n,m);
    }
};