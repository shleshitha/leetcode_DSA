class Solution {
public:
    bool checkPowersOfThree(int n) {
        int i=16;
        while(n>0&&i>=0){
            if(pow(3,i)<=n)
            n-=pow(3,i);
            i--;
            cout<<n<<endl;
        }
        return n==0;
    }
};