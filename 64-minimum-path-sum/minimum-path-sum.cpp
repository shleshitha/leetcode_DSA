class Solution {
public:
    int h(vector<vector<int>>& grid,vector<vector<int>>& dp,int i, int j){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size())
        return INT_MAX;
        if(dp[i][j]==-1){
            dp[i][j]=min(h(grid,dp,i-1,j),h(grid,dp,i,j-1))+grid[i][j];
        }
        return dp[i][j];
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        dp[0][0]=grid[0][0];
        return h(grid,dp,n-1,m-1);
    }
};