class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int n=nums.size()/2;
       
        int cnt=0;
        for(auto i : mp){
            cnt+=i.second/2;
        }
        return n==cnt;
    }
};