class Solution {
public:
    bool check(vector<int>v,int i,int sum,int n){
        if(sum==n) return true;
        if(i>=v.size()) return false;
        return check(v,i+1,sum+pow(3,i),n) || check(v,i+1,sum,n);
    }
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