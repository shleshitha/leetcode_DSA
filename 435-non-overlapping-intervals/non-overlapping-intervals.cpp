class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),
        [](auto &a, auto &b){ return a[1]<b[1];});
        for(auto i : intervals)
        cout<<i[0]<<" "<<i[1]<<endl;
        int overlapping=0;
        int prev=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<prev)
            overlapping++;
            else
            prev=intervals[i][1];
        }
        return overlapping;
    }
};