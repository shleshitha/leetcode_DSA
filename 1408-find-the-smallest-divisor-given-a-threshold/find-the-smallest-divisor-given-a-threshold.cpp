class Solution {
public:
    bool satisfied(vector<int>& nums, int threshold,int divisor){
        int ans=0;
        for(int i : nums){
            ans+=ceil(i/(float)divisor);
        }
        return ans<=threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int i=1,j=*max_element(nums.begin(),nums.end());
        int ans=0;
        while(i<=j){
            int mid=(i+j)/2;
            if(satisfied(nums,threshold,mid)){
                ans=mid;
                j=mid-1;
            }
            else
            i=mid+1;
        }
        return ans;
    }
};