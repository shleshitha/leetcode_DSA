class MyCalendar {
public:
    vector<pair<int,int>>calender;
    MyCalendar() {
        
    }
    
    bool book(int startTime, int endTime) {
        for(auto [l,r] :calender){
            if((startTime>=l && startTime<r)||(endTime>l&&endTime<=r)||(startTime<=l&&endTime>=r))
            return false;
        }
        calender.push_back({startTime,endTime});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(startTime,endTime);
 */