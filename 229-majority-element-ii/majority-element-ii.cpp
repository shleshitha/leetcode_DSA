class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>mp;
        for(int i : nums){
            mp[i]++;
        }
        int f=nums.size()/3;
        vector<int>ans;
        for(auto x : mp){
            if(x.second>f)
            ans.push_back(x.first);
        }
        return ans;
    }
};