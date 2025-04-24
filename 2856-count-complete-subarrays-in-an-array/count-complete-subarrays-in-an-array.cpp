class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        set<int>s;
        for(int i : nums){
            s.insert(i);
        }
        int n = nums.size();
        unordered_map<int,int>mp;
        int i=0,j=0,ans=0;
        while(j<nums.size()){
            mp[nums[j]]++;
            while(mp.size()==s.size()){
                ans+=n-j;
                // cout<<n<<" "<<j<<endl;
                mp[nums[i]]--;
                if(mp[nums[i]]==0)
                mp.erase(nums[i]);
                i++;
            }
            j++;
        }
        return ans;
    }
};