class Solution {
public:
    long long coloredCells(int n) {
        long long ans=0;
        long long cnt=1;
        int i=1;
        while(i<n){
            ans+=(cnt*2);
            cnt+=2;
            i++;
        }
        ans+=cnt;
        return ans;
    }
};