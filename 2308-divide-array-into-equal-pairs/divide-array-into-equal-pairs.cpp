class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int>mp;
         int cnt=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]==2){
                cnt++;
                mp[nums[i]]=0;
            }

        }
        int n=nums.size()/2;
       
        return n==cnt;
    }
};