class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans=0;
        for(int i=0;i<points.size()-1;i++){
            pair<int,int> p1 = {points[i][0],points[i][1]}, p2={points[i+1][0],points[i+1][1]};
            ans+=max(abs(p1.first-p2.first),abs(p1.second-p2.second));
        }
        return ans;
    }
};