class Solution {
public:
    const int m = 1e9 + 7;
    long long myPow(long long x, long long N) {
        long long ans = 1;
        x%=m;
        while (N > 0) {
            if (N % 2 == 1)
                ans = (ans *x)%m;
            x =(x*x)%m;
            N /= 2;
        }
        return ans;
    }
    int countGoodNumbers(long long n) {
        long long  a,b;
        a=b=n/2;
        if(n%2==1)
        a++;
        long long ans=(myPow(5,a)*myPow(4,b))%m;
        return ans;
    }
};