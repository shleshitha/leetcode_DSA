class Solution {
public:
    void dfs(vector<vector<int>>& mat, vector<bool>&vis, int node){
        if(vis[node]) return;
        vis[node]=true;
        for(int j=0; j<mat[node].size();j++){
            if(mat[node][j]==1)
            dfs(mat,vis,j);
        }
    }
    int findCircleNum(vector<vector<int>>& mat) {
        int provinces=0, n=mat.size();
        vector<bool>vis(n,false);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(mat,vis,i);
                provinces++;
            }
        }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         if(isConnected[i][j]==1){
        //             if(i==j)
        //             isConnected[i][j]=0;
        //             else{
        //                 provinces++;
        //                 dfs(isConnected,i);
        //             }
        //         }
        //     }
        // }
        return provinces;
    }
};