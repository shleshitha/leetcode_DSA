class Solution {
public:
    // void print(vector<vector<char>>&board)
    // {
    //     for(auto i : board){
    //         for(auto j : i)
    //         cout<<j<<" ";
    //         cout<<endl;
    //     }
    //     cout<<endl;
    // }
    bool help(vector<vector<char>>&board,bool rows[9][9],bool cols[9][9],bool grids[9][9],vector<pair<int,int>>&emp, int idx){
        if(idx>=emp.size()){
            //  print(board);
            // ans=board;
            return true;
        }
        
       
        for(int i=1;i<=9;i++){
            int x=emp[idx].first;
            int y=emp[idx].second;
            int grididx=(x/3)*3+(y/3);
            if(rows[x][i-1]==0&&cols[y][i-1]==0&&grids[grididx][i-1]==0){
                board[x][y]='0'+i;
                rows[x][i-1]=true;
                cols[y][i-1]=true;
                grids[grididx][i-1]=true;
                if(help(board,rows,cols,grids,emp,idx+1))
                return true;
                board[x][y]='.';
                rows[x][i-1]=false;
                cols[y][i-1]=false;
                grids[grididx][i-1]=false;
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        bool rows[9][9];
        bool cols[9][9];
        bool grids[9][9];
        vector<pair<int,int>>emp;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.')
                emp.push_back({i,j});
                else{
                    int val=board[i][j]-'1';
                    rows[i][val]=true;
                    cols[j][val]=true;
                    int grididx=(i/3)*3+(j/3);
                    grids[grididx][val]=true;
                }
            }
        }
        // vector<vector<char>>temp=board;
        help(board,rows,cols,grids,emp,0);
    }
};