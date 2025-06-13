class Solution {
public:
    int bs(vector<int>& numbers, int target,int i){
        // cout<<target<<endl;
        int l=0,h=numbers.size()-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(numbers[mid]==target && mid!=i)
            return mid;
            else if(numbers[mid]<=target)
            l=mid+1;
            else
            h=mid-1;
        }
        return -1;
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        int n=numbers.size();
        for(int i=0;i<n;i++){
            int idx=bs(numbers,target-numbers[i],i);
            if(idx!=-1){
                ans.push_back(i+1);
                ans.push_back(idx+1);
                return ans;
            }
        }
        return ans;
    }
};