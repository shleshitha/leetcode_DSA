class Solution {
public:
    bool check(vector<int>v,int i,int sum,int n){
        if(sum==n) return true;
        if(i>=v.size()) return false;
        return check(v,i+1,sum+pow(3,i),n) || check(v,i+1,sum,n);
    }
    bool checkPowersOfThree(int n) {
        vector<int>v;
        for(int i=0;pow(3,i)<=n;i++){
            v.push_back(i);
            cout<<i<<" ";
        }
        return check(v,0,0,n);
    }
};