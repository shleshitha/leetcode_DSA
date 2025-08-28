class Solution {
public:
    int candy(vector<int>& ratings) {
        priority_queue<int,vector<int>,greater<int>>mini;
        map<int,vector<int>>mp;
        int n=ratings.size();
        for(int i=0;i<n;i++){
            mp[ratings[i]].push_back(i);
            mini.push(ratings[i]);
        }
        vector<int>candies(n,0);
        while(!mini.empty()){
            int curr=mini.top();
            mini.pop();
            auto v=mp[curr];
            for(int i : v){
                int maxi=0;
                if(i-1>=0&&ratings[i-1]<curr){
                    maxi=max(maxi,candies[i-1]);
                }
                if(i+1<n&&ratings[i+1]<curr){
                    maxi=max(maxi,candies[i+1]);
                }
                candies[i]=maxi+1;
            }
        }
        int sum=0;
        for(int i : candies)
        sum+=i;
        return sum;
    }
};