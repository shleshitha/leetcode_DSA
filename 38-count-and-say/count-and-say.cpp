class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
        return "1";
        string prev = countAndSay(n-1);
        string ans;
        int i=0,j=0;
        while(j<prev.size()){
            while(prev[i]==prev[j])
            j++;
            int t=(j-i)*10+(prev[i]-'0');
            ans+=to_string(t);
            i=j;
        }
        return ans;
    }
};