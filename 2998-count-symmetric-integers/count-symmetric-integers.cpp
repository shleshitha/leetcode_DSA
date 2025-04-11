class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int ans=0;
        for(int i=low;i<=high;i++){
            string temp=to_string(i);
            if(temp.size()%2==0){
                int sum=0;
                for(int j=0;j<temp.size()/2;j++){
                    sum+=temp[j]-'0';
                }
                for(int j=temp.size()/2;j<temp.size();j++)
                sum-=temp[j]-'0';
                if(sum==0) ans++;
            }
            
        }
        return ans;
    }
};