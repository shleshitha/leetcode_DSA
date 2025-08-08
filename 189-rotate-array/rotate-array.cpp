class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        k=n-k;
        int i=0;
        vector<int>t;
        while(i<k){
            t.push_back(nums[i]);
            i++;
        }
        int j=0;
        while(i<n){
            nums[j]=nums[i];
            j++;
            i++;
        }
        i=0;
        while(j<n){
            nums[j]=t[i];
            j++;
            i++;
        }
    }
};