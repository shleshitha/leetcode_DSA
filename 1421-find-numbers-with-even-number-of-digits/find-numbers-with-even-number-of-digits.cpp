class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(auto i : nums){
            string t = to_string(i);
            if(t.size()%2==0)
            ans++;
        }
        return ans;
    }
};