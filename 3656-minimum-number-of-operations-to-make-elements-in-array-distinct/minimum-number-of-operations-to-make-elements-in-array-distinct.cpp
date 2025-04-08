class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int cnt=0;
        reverse(nums.begin(),nums.end());
        for(int i : nums)
            cout<<i<<" ";
        cout<<endl;
        while(!nums.empty()){
            set<int>s;
            if(nums.size()==0)
                break;
            int i;
            int n=nums.size();
            for(i=0;i<nums.size();i++){
                if(s.find(nums[i])!=s.end()){
                    cnt++;
                    for(int i=0;i<3&&!nums.empty();i++)
                        nums.pop_back();
                    break;
                }
                else
                s.insert(nums[i]);
            }
            if(i==n)
                break;
            // cout<<nums.size()<<endl;
            // for(int i : nums)
            // cout<<i<<" ";
            // cout<<endl;
            // break;
        }
        return cnt;
    }
};