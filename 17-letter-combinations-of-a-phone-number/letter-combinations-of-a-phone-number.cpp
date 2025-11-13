class Solution {
public:
    void helper(string digits,map<char, vector<char>> &mp, vector<string>&ans, string t,int i){
        if(t.size()==digits.size()){
            ans.push_back(t);
            return;
        }
        vector<char>c=mp[digits[i]];
        for(int j=0;j<c.size();j++){
            helper(digits,mp,ans,t+c[j],i+1);
        }

    }
    vector<string> letterCombinations(string digits) {
        map<char, vector<char>> mp = {
            { '2', {'a','b','c'} },
            { '3', {'d','e','f'} },
            { '4', {'g','h','i'} },
            { '5', {'j','k','l'} },
            { '6', {'m','n','o'} },
            { '7', {'p','q','r','s'} },
            { '8', {'t','u','v'} },
            { '9', {'w','x','y','z'} }
        };
        vector<string>ans;
        string t;
        helper(digits,mp,ans,t,0);
        return ans;  
    }
};