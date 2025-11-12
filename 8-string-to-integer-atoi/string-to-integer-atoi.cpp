class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        while(i<s.size() && s[i]==' ')
        i++;
        if(i==s.size()) return 0;
        long sign=1,ans=0;
        if(s[i]=='-'){
            sign=-1;
            i++;
        }
        else if(s[i]=='+')
        i++;
        while(i<s.size() && isdigit(s[i])){
            ans=ans*10+(s[i]-'0');
            long t=sign*ans;
            if(t>INT_MAX)
            return INT_MAX;

            if(t<INT_MIN)
            return INT_MIN;

            
            i++;
        }

        return sign*ans;
    }
};