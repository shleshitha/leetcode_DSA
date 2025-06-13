class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(), m=matrix[0].size();
        int lo=0,hi=n-1;
        int row=0;
        while(lo<=hi){
            int mid = (lo+hi)/2;
            if(matrix[mid][0]>target)
            hi=mid-1;
            else if(matrix[mid][m-1]>=target){
                row=mid;
                break;
            }
            else
            lo=mid+1;
        }
        cout<<row<<endl;
        lo=0,hi=m-1;
        while(lo<=hi){
            int mid = (lo+hi)/2;
            if(matrix[row][mid]==target)
            return true;
            else if(matrix[row][mid]>target){
               hi=mid-1;
            }
            else
            lo=mid+1;
        }
        return false;
    }
};