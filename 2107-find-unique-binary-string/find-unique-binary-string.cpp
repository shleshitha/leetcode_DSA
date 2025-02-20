class Solution {
public:
    vector<char>v={'0','1'};
    string helper(set<string>&s, int n, string t){
        if(t.size()==n){
            // if(s.find(t)==s.end())
            cout<<t<<endl;
            return t;
        }
        for(char c : v){
            string s1=helper(s,n,t+c);
            if(s.find(s1)==s.end()&&s1!="")
            return s1;
        }
        return "";
    }
    string findDifferentBinaryString(vector<string>& nums) {
        set<string>s;
        for(string i : nums){
            s.insert(i);
        }
        return helper(s,nums.size(),"");
    }
};