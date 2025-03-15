class Solution {
public:
    vector<int>x={0,1,0,-1};
    vector<int>y={1,0,-1,0};
    void dfs(vector<vector<char>>& grid, int i, int j){
        // if(i<0||i>=grid.size()||j<0||j>=grid[0].size())
        // return;
        grid[i][j]='\0';
        for(int k=0;k<4;k++){
            int x1=i+x[k];
            int y1=j+y[k];
            if(x1>=0&&x1<grid.size()&&y1>=0&&y1<grid[0].size()&& grid[x1][y1]=='1')
            dfs(grid,x1,y1);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        int n=grid.size(),m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    ans++;
                    dfs(grid,i,j);
                }
            }
        }
        return ans;
    }
};