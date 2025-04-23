class Solution {
public:
    int calculateSum(int n){
        int ans=0;
        while(n>0){
            ans+=n%10;
            n=n/10;
        }
        return ans;
    }
    int countLargestGroup(int n) {
        unordered_map<int,int>mp;
        int cnt=0,size=0;
        for(int i=1;i<=n;i++){
            int sum = calculateSum(i);
            // cout<<sum<<endl;
            mp[sum]++;
            if(mp[sum]>size){
                size=mp[sum];
                cnt=1;
            }
            else if(mp[sum]==size){
                cnt++;
            }
        }
        return cnt;
    }
};