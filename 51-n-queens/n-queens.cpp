class Solution {
public:
    bool issafe(vector<string>&board,int row,int col,int n){
        for(int i=0;i<=row;i++){
            if(board[i][col]=='Q')
            return false;
        }
        int i=row,j=col;
        while(i>=0 && j>=0){
            if(board[i][j]=='Q')
            return false;
            i--;
            j--;
        }
        i=row,j=col;
        while(i>=0 && j<n){
            if(board[i][j]=='Q')
            return false;
            i--;
            j++;
        }
        return true;
        
    }
    void nQueens(vector<vector<string>>&ans,vector<string>&board,int row,int n){
        if(row==n){
            ans.push_back(board);
            return;
        }

        for(int col=0;col<n;col++){
            if(issafe(board,row,col,n)){
                board[row][col]='Q';
                nQueens(ans,board,row+1,n);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n,string(n,'.'));
        nQueens(ans,board,0,n);
        return ans;

    }
};