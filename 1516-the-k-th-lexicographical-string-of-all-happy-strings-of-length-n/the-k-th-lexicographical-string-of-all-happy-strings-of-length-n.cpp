class Solution {
    vector<char>s={'a','b','c'};
public:
    void happy(int n,vector<string>&v,string t){
        if(t.size()>=n){
            v.push_back(t);
            return;
        }
        for (char ch : s) {
            if (t.empty() || t.back() != ch) {
                happy(n, v, t + ch);
            }
        }
    }
    string getHappyString(int n, int k) {
        vector<string>v;
        string t;
        happy(n,v,t);
        if(k<=v.size())
        return v[k-1];
        else
        return "";
    }
};