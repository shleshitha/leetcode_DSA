class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>s,b;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot)
            s.push_back(nums[i]);
            else if(nums[i]>pivot)
            b.push_back(nums[i]);
            else cnt++;
        }
        vector<int>ans;
        for(int i : s){
            ans.push_back(i);
        }
        while(cnt--){
            ans.push_back(pivot);
        }
        for(int i : b){
            ans.push_back(i);
        }
        return ans;
    }
};