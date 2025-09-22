class Solution {
public:
    bool valid(vector<int>& bloomDay, int m, int k,int days){
        int cnt=0,bo=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=days){
                cnt++;
                if(cnt==k){
                    bo++;
                    cnt=0;
                }
            }
            else
            cnt=0;
        }
        return bo>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        // if(((long long)(m*k))>bloomDay.size()) return -1;
        int i=0,j=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(valid(bloomDay,m,k,mid)){
                ans=mid;
                j=mid-1;
            }
            else
            i=mid+1;
        }
        return ans;
    }
};