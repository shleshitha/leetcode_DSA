class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        // vector<int>ans;
        // int peak=INT_MIN;
        int low=0,high=n-1;
        while(low<=high){
            int row=(low+high)/2;
            int col=max_element(mat[row].begin(),mat[row].end())-mat[row].begin();
            int val=mat[row][col];
            int top=row-1<0?-1:mat[row-1][col];
            int bot=row+1>=n?-1:mat[row+1][col];
            if(top<val && val>bot)
            return {row,col};
            if(top<val)
            low=row+1;
            else
            high=row-1;
        }
        return {};
    }
};