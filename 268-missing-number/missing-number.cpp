class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        for(int x : nums){
            sum+=x;
        }
        int n=nums.size();
        int ts=(n*(n+1))/2;
        return ts-sum;
    }
};