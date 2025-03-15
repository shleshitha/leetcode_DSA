class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++)
        mp[nums[i]].push_back(i);
        int cnt=0;
        vector<int>ans(nums.size());
        for(auto i=mp.begin();i!=mp.end();i++){
            for(auto j : i->second){
                ans[j]=cnt;
            }
            cnt+=i->second.size();
        }
        return ans;
    }
};