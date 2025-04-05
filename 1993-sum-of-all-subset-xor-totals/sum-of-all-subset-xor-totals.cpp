class Solution {
public:
    int findxor(vector <int>& nums){
        int ans=0;
        for(int num : nums){
            ans^=num;
        }
        return ans;
    }
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size(),ans=0;
        for(int i=0;i<(1<<n);i++){
            vector<int>subset;
            for(int j=0;j<n;j++){
                if(i&(1<<j))
                subset.push_back(nums[j]);
            }
            ans+=findxor(subset);
        }
        return ans;
    }
};