class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp1;
        for(char c : s){
            mp1[c]++;
        }
        map<int,vector<char>,greater<int>>mp2;
        for(auto [k, v] : mp1){
            mp2[v].push_back(k);
        }
        string ans;
        for(auto [k,v] : mp2){
            for(char c : v){
                ans.append(k,c);
            }
        }
        return ans;
    }
};