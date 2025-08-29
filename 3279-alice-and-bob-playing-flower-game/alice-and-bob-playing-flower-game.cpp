class Solution {
public:
    long long flowerGame(int n, int m) {
        long long nodd=n/2+(n%2==0?0:1);
        long long neven=n/2;
        long long meven=m/2;
        long long modd=meven+(m%2==0?0:1);
        long long ans=(nodd*meven)+(neven*modd);
        return ans;
    }
};