class Solution {
public:
    vector<int>x={0,1,0,-1};
    vector<int>y={1,0,-1,0};
    void dfs(vector<vector<int>>& grid, int i,int j,int &cnt){
        if(i<0||i>=grid.size()||j<0||j>=grid[0].size()||grid[i][j]==0)
        return;
        grid[i][j]=0;
        cnt++;
        for(int k=0;k<4;k++){
            int m=i+x[k];
            int n=j+y[k];
            dfs(grid,m,n,cnt);
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    int cnt=0;
                    dfs(grid,i,j,cnt);
                    ans=max(ans,cnt);
                }
            }
        }
        return ans;
    }
};