class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int cnt=0,maxi=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]-nums[i]==0)
            continue;
            cnt++;
            maxi=max(maxi,cnt);
            if(nums[i+1]-nums[i]!=1){
                cnt=0;
            }
        }
        cnt++;              //for the last element
        maxi=max(maxi,cnt);
        return maxi;
    }
};