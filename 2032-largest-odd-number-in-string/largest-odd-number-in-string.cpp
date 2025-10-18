class Solution {
public:
    string largestOddNumber(string num) {
        while(num.size()>0){
            int n=num.back()-'0';
            if(n%2==1) return num;
            num.pop_back();
        }
        // cout<<num.back();
        return num;
    }
};