class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        set<int>s;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<k)
            return -1;
            if(nums[i]==k)
            continue;
            s.insert(nums[i]);
        }
        return s.size();
    }
};