class Solution {
public:
    string largestGoodInteger(string num) {
        map<char,int>mp;
        vector<string>ans;
        for(int i=0;i<3;i++){
            mp[num[i]]++;
        }
        if(mp.size()==1)
        ans.push_back(num.substr(0,3));
        for(int i=3;i<num.size();i++){
            if(mp[num[i-3]]==1){
                mp.erase(num[i-3]);
            }
            else
            mp[num[i-3]]--;

            mp[num[i]]++;
            if(mp.size()==1)
            ans.push_back(num.substr(i-2,3));
        }
        if(ans.empty())return "";
        sort(ans.begin(),ans.end());
        return ans[ans.size()-1];
        
    }
};