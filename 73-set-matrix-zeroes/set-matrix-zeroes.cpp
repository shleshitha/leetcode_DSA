class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>>v;
        int n=matrix.size(), m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    v.push_back({i,j});
                }
            }
        }
        for(int i=0;i<v.size();i++){
            int row=v[i].first, col=v[i].second;
            // cout<<row<<" "<<col<<endl;
            for(int k=0;k<m;k++){
                matrix[row][k]=0;
            }
            for(int l=0;l<n;l++){
                matrix[l][col]=0;
            }
        }
    }
};