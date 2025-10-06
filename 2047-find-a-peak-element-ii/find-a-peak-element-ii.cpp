class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        vector<int>ans;
        int peak=INT_MIN;
        for(int i=0;i<n;i++){
            // int low=0,high=m-1;
            // while(low<=high){
            //     int mid=(low+high)/2;
            //     int val=mat[i][mid];
            //     int left=mid-1<0? -1 : mat[i][mid-1];
            //     int right=mid+1>=m? -1 : mat[i][mid+1];
            //     if(val>left && val>right){
            //         if(peak<val){
            //             peak=val;
            //             ans={i,mid};
            //         }
            //     }
            //     if(val<left)
            //     high=mid-1;
            //     else
            //     low=mid+1;
            // }
            auto maxi=max_element(mat[i].begin(),mat[i].end());
            if(*maxi>peak){
                peak=*maxi;

                ans={i,(int)(maxi-mat[i].begin())};
            }
        }
        return ans;
    }
};