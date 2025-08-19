class Solution {
public:
    string largestGoodInteger(string num) {
        map<char,int>mp;
        string ans="";
        for(int i=0;i<3;i++){
            mp[num[i]]++;
        }
        if(mp.size()==1)
        ans=num.substr(0,3);
        for(int i=3;i<num.size();i++){
            if(mp[num[i-3]]==1){
                mp.erase(num[i-3]);
            }
            else
            mp[num[i-3]]--;

            mp[num[i]]++;
            if(mp.size()==1)
            ans=max(ans,num.substr(i-2,3));
        }

        return ans;
        
    }
};