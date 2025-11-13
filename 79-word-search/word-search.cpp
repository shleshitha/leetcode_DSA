class Solution {
public:
    bool check(vector<vector<char>>& board, string word,int n,int m,int i,int j,int idx){
        if(idx==word.size()) return true;
        if(i<0||i>=n||j<0||j>=m||board[i][j]!=word[idx])
        return false;
        char c=board[i][j];
        board[i][j]='!';
        bool right = check(board,word,n,m,i+1,j,idx+1);
        bool left = right || check(board,word,n,m,i-1,j,idx+1);
        bool top = left || check(board,word,n,m,i,j+1,idx+1);
        bool bot = top || check(board,word,n,m,i,j-1,idx+1);
        board[i][j]=c;
        return bot;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size(),m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]){
                    if(check(board,word,n,m,i,j,0))
                    return true;
                }
            }
        }
        return false;
    }
};