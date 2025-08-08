class Solution {
public:
    int m=1e9+7;
    int power(int n,long long k){
        if(k==0) return 1;
        long long half=power(n,k/2);
        long long result=(half*half)%m;
        if(k%2==1)
        result=(result*n)%m;
        return result%m;
    }
    int countGoodNumbers(long long n) {
        long long even_places=(n+1)/2;
        long long odd_places=n/2;
        long long even=power(5,even_places);
        long long odd=power(4,odd_places);
        return (even*odd)%m;
    }
};