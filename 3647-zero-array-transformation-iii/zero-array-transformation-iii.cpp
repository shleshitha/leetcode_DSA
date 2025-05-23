class Solution {
public:
    int maxRemoval(vector<int>& nums, vector<vector<int>>& queries) {
        sort(queries.begin(),queries.end());
        // for(auto x : queries){
        //     cout<<x[0]<<" "<<x[1]<<endl;
        // }
        priority_queue<int>available;   //max heap
        priority_queue<int,vector<int>,greater<int>>used;    //min heap
        int j=0;    // for tracking index of queries
        for(int i=0;i<nums.size();i++){
            while(j<queries.size() && queries[j][0]==i){
                available.push(queries[j][1]);
                j++;
            }
            while(used.size()<nums[i] && available.size()!=0){
                if(available.top()>=i)
                {used.push(available.top());
                available.pop();}
                else
                break;
            }
            if(used.size()<nums[i])
            return -1;
            while(used.size()!=0 && used.top()==i){
                used.pop();
            }
        }
        return available.size();
    }
};