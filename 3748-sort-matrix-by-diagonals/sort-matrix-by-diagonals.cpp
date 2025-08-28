class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        int diagonals=(n*2)-1;
        int mid=diagonals/2;
        int x=0,y=n-1;
        for(int i=1;i<=mid;i++){
            int k=x,l=y;
            priority_queue<int,vector<int>,greater<int>>min;
            while(k<n&&l<n){
                min.push(grid[k][l]);
                k++;
                l++;
            }
            k=x,l=y;
            while(k<n&&l<n){
                grid[k][l]=min.top();
                min.pop();
                k++;
                l++;
            }
            y--;
        }
        x=0;
        y=0;
        for(int i=mid+1;i<=diagonals;i++){
            int k=x,l=y;
            priority_queue<int>max;
            while(k<n&&l<n){
                cout<<grid[k][l]<<" ";
                max.push(grid[k][l]);
                k++;
                l++;
            }
            k=x,l=y;
            while(k<n&&l<n){
                grid[k][l]=max.top();
                max.pop();
                k++;
                l++;
            }
            x++;
        }
        return grid;
    }
};