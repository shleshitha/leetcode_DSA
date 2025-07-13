class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>s;
        int ans=0,count=0;;
        s[count]=1;
        for(int i : nums){
            count+=i;
            
            if(s.find(count-k)!=s.end())
            ans+=s[count-k];
            s[count]++;
        }
        return ans;
    }
};