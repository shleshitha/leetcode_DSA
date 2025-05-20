class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        vector<int>temp(n,0);
        for(auto k : queries){
            int i=k[0],j=k[1];
            temp[i]+=-1;
            if(j<n-1)
            temp[j+1]+=1;
        }
        for(int i=1;i<n;i++){
            temp[i]+=temp[i-1];
        }
        for(int i=0;i<n;i++){
            temp[i]+=nums[i];
            cout<<temp[i]<<" ";
            if(temp[i]>0)
            return false;
        }
        return true;
    }
};