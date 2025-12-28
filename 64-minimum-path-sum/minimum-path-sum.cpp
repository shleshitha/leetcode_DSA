class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int r=grid.size(),c=grid[0].size();
        vector<int>prev(c,0), curr(c,0);
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(i==0 && j==0){
                    curr[j]=grid[0][0];
                    continue;
                }
                int left=INT_MAX,up=INT_MAX;
                if(i>0)
                up=prev[j];
                if(j>0)
                left=curr[j-1];
                curr[j]=min(up,left)+grid[i][j];
            }
            prev=curr;
        }
        return prev[c-1];
    }
};