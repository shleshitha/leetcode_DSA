class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,0));
        dp[0][0]=triangle[0][0];
        for(int i=1;i<n;i++){
            for(int j=0;j<=i;j++){
                int up=INT_MAX,leftup=INT_MAX;
                if(j<i)
                up=dp[i-1][j];
                if(j>0)
                leftup=dp[i-1][j-1];
                dp[i][j]=min(up,leftup)+triangle[i][j];
            }
        }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<=i;j++){
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        return *min_element(dp[n-1].begin(),dp[n-1].end());
    }
};