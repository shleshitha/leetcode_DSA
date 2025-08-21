class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size();
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(j!=0){
                    mat[i][j]=mat[i][j]==0?0:mat[i][j-1]+1;
                }
                // cout<<mat[i][j]<<" ";
                int curr=mat[i][j];
                for(int k=i;k>=0;k--){
                    curr=min(curr,mat[k][j]);
                    ans+=curr;
                }
            }
            cout<<endl;
        }
        return ans;
    }
};