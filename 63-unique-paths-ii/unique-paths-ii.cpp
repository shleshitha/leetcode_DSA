class Solution {
public:
    int h(vector<vector<int>>& grid,vector<vector<int>>& dp,int i, int j,int n,int m){
        if(i<0 || j<0 || i>=n || j>=m || grid[i][j]==1)
        return 0;
        if(dp[i][j]==0){
            dp[i][j]=h(grid,dp,i-1,j,n,m)+h(grid,dp,i,j-1,n,m);
        }
        return dp[i][j];
    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,0));
        dp[0][0]=1;
        return h(grid,dp,n-1,m-1,n,m);
    }
};