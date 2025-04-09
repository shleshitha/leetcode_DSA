class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int mini=*min_element(nums.begin(),nums.end());
        if(mini<k) return -1;
        set<int>s;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==k)
            continue;
            s.insert(nums[i]);
        }
        return s.size();
    }
};