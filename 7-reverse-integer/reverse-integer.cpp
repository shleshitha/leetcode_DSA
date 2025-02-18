class Solution {
public:
    int reverse(int x) {
        long rev=0;
        while(x){
            int d=x%10;
            
            x=x/10;
            rev=rev*10+d;
            
        }if(rev<=pow(-2,31)||rev>=pow(2,31)-1)
            return 0;
        return rev;
    }
};