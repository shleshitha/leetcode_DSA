class Solution {
public:
    int m=1e9+7;
    long  power(int n, long long x){
        if(x==0) return 1;
        long long p=power(n,x/2)%m;
        long long result=(p*p);
        if(x%2==1)
        result=(result*n);
        return result;
    }
    int monkeyMove(int n) {
        // long long p=power(2,n);
        return (power(2,n)-2)%m;
    }
};