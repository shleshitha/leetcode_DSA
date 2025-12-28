class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        // vector<vector<int>>dp(n,vector<int>(n,0));
        int size=1;
        vector<int>prev(size,0);
        prev[0]=triangle[0][0];
        for(int i=1;i<n;i++){
            size++;
            vector<int>curr(size,0);
            for(int j=0;j<=i;j++){
                int up=INT_MAX,leftup=INT_MAX;
                if(j<i)
                up=prev[j];
                if(j>0)
                leftup=prev[j-1];
                curr[j]=min(up,leftup)+triangle[i][j];
            }
            prev.resize(size,0);
            prev=curr;
            
        }
        return *min_element(prev.begin(),prev.end());
    }
};