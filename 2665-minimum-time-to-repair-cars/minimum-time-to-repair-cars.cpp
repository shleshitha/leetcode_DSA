class Solution {
public:
    bool check(vector<int>& ranks, int cars, long time){
        long cnt=0;
        for(int i=0;i<ranks.size();i++){
            cnt+=sqrt(time/ranks[i]);
        }
        return cnt>=cars;
    }
    long long repairCars(vector<int>& ranks, int cars) {
        long long ans=0;
        long long lo=1, hi=pow(10,14);
        while(lo<=hi){
            long long mid = (lo+hi)/2;
            if(check(ranks,cars,mid)){
                ans=mid;
                hi=mid-1;
            }
            else
            lo=mid+1;
        }
        return ans;
    }
};