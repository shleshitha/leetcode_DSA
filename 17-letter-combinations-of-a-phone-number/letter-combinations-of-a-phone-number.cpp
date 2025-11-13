class Solution {
public:
    void helper(string digits,vector<string>&data, vector<string>&ans, string t,int i){
        if(t.size()==digits.size()){
            ans.push_back(t);
            return;
        }
        int idx=digits[i]-'0';
        for(int j=0;j<data[idx].size();j++){
            helper(digits,data,ans,t+data[idx][j],i+1);
        }

    }
    vector<string> letterCombinations(string digits) {
        vector<string>data={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>ans;
        string t;
        helper(digits,data,ans,t,0);
        return ans;  
    }
};