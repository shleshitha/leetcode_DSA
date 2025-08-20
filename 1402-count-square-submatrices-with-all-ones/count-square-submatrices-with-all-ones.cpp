class Solution {
public:
    void check(vector<vector<int>>& matrix,int i,int j,int m,int n,int &ans){
        int t1=i,t2=j;
        // cout<<i<<" "<<j<<endl;
        while(t1<m && t2<n){
            // cout<<t1<<" "<<t2<<endl;
            for(int k=i;k<=t1;k++){
                for(int l=j;l<=t2;l++){
                    if(!matrix[k][l])
                    return;
                }
            }
            t1++;
            t2++;
            ans++;
        }
        return;
    }
    int countSquares(vector<vector<int>>& matrix) {
        int ans=0;
        int m=matrix.size(),n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]){
                    // ans++;
                    check(matrix,i,j,m,n,ans);
                }
                // cout<<ans<<endl;
            }
        }
        return ans;
    }
};