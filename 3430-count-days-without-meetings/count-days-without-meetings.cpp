class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());
        vector<vector<int>>merged;
        for(auto i : meetings){
            if(merged.empty() || i[0] > merged.back()[1])
            merged.push_back(i);
            else
            merged.back()[1]=max(merged.back()[1],i[1]);
        }
        int d=0;
        for(auto i : merged){
            d+=i[1]-i[0]+1;
        }
        
        return days-d;
    }
};