class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,1e9));
        dp[0][0]=0;
        int cnt=1;
        for(int i=coins[0];i<=amount;i+=coins[0]){
            dp[0][i]=cnt++;
        }
        for(int i=0;i<n;i++){
            dp[i][0]=0;
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<=amount;j++){
                int nt=dp[i-1][j];
                int t=1e9;
                if(coins[i]<=j)
                t=dp[i][j-coins[i]];
                dp[i][j]=min(nt,1+t);
            }
        }
        if(dp[n-1][amount]==1e9)
        return -1;
        return dp[n-1][amount];
    }
};