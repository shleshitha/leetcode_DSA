class Solution {
public:
    long helper(string s,int sign, int i, long ans){
        
        if(i>=s.size() || (!isdigit(s[i]))) return (int)(sign*ans);
        
        ans=ans*10+(s[i]-'0');
        if(sign*ans>=INT_MAX)
        return INT_MAX;
        if(sign*ans<=INT_MIN)
        return INT_MIN;
        return helper(s,sign,i+1,ans);

    }
    int myAtoi(string s) {
        int i=0,sign=1;
        while(i<s.size() && s[i]==' ')
        i++;
        if(i==s.size()) return 0;
        if(s[i]=='-') {sign=-1;
        i++;}
        else if(s[i]=='+') i++;
        return helper(s,sign,i,0);
    }
};