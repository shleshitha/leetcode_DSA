class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        set<vector<long long>>exist;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long long sum=nums[i]+nums[j];
                long long rem=target-sum;
                set<long long>s;
                for(int k=j+1;k<n;k++){
                    if(s.find(rem-nums[k])==s.end())
                    s.insert(nums[k]);
                    else{
                        vector<long long>temp={nums[i],nums[j],nums[k],rem-nums[k]};
                        sort(temp.begin(),temp.end());
                        if(exist.find(temp)==exist.end()){
                            ans.push_back({nums[i],nums[j],nums[k],int(rem-nums[k])});
                            exist.insert(temp);
                        }
                    }
                }
            }
        }
        return ans;
    }
};