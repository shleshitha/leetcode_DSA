class Solution {
public:
    string smallestNumber(string pattern) {
        stack<int>s;
        string ans;
        for(int i=1;i<=pattern.size()+1;i++){
            s.push(i);
            if(i==pattern.size()+1||pattern[i-1]=='I'){
                while(!s.empty()){
                    ans=ans+char('0'+s.top());
                    s.pop();
                }
            }
        }
        return ans;
    }
};