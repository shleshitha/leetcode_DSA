class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>>rows(9,vector<int>(9,0));
        vector<vector<int>>cols(9,vector<int>(9,0));
        vector<vector<int>>x={
            {0,0,2,2},{0,3,2,5},{0,6,2,8},
            {3,0,5,2},{3,3,5,5},{3,6,5,8},
            {6,0,8,2},{6,3,8,5},{6,6,8,8}
        };
        for(int grid=0;grid<9;grid++){
            vector<bool>t(10,false);
            for(int i=x[grid][0];i<=x[grid][2];i++){
                for(int j=x[grid][1];j<=x[grid][3];j++){
                    if(board[i][j]=='.')
                    continue;
                    int val=board[i][j]-'0';
                    if(t[val]||rows[i][val-1]!=0||cols[j][val-1]!=0)
                    return false;
                    t[val]=true;
                    rows[i][val-1]=1;
                    cols[j][val-1]=1;
                }
                // cout<<endl;
            }
        }
        return true;
    }
};