class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>>rows(9,vector<int>(9,0));
        vector<vector<int>>cols(9,vector<int>(9,0));
        vector<vector<int>>grid(9,vector<int>(9,0));
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.')
                continue;
                int val=board[i][j]-'1';
                int grididx=(i/3)*3+(j/3);
                if(grid[grididx][val]!=0||rows[i][val]!=0||cols[j][val]!=0)
                return false;
                grid[grididx][val]=1;
                rows[i][val]=1;
                cols[j][val]=1;
            }
            // cout<<endl;
        }
        return true;
    }
};