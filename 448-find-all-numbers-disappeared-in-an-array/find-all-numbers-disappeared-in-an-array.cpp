class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[abs(nums[i])-1]=-abs(nums[abs(nums[i])-1]);
        }
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
           if(nums[i]>0)
           ans.push_back(i+1);
        }
        // cout<<endl;
        return ans;
    }
};