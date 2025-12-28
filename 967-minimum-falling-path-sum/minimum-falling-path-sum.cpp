class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>>dp(n,vector<int>(n,0));
        dp[0]=matrix[0];
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                int left=INT_MAX,up=INT_MAX,right=INT_MAX;
                if(j>0)
                left=dp[i-1][j-1];
                up=dp[i-1][j];
                if(j<n-1)
                right=dp[i-1][j+1];
                dp[i][j]=min(left,min(up,right))+matrix[i][j];
            }
        }
        return *min_element(dp[n-1].begin(),dp[n-1].end());
    }
};