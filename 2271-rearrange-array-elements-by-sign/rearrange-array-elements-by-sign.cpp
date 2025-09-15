class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos,neg;
        for(int x : nums){
            if(x<0)
            neg.push_back(x);
            else
            pos.push_back(x);
        }
        int j=0;
        for(int i=0;i<pos.size();i++){
            nums[j++]=pos[i];
            nums[j++]=neg[i];
        }
        return nums;
    }
};