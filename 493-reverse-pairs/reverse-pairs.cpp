class Solution {
public:
    void merge(vector<int>&nums,int i,int mid,int j,int &ans){
        int right=mid+1;
        for(int left=i;left<=mid;left++){
            while(right<=j && nums[left]>2LL*nums[right])
            right++;
            ans+=(right-(mid+1));
        }
        vector<int>temp;
        int k=i,l=mid+1;
        while(k<=mid && l<=j){
            if(nums[k]<nums[l]){
                temp.push_back(nums[k]);
                k++;
            }
            else{
                temp.push_back(nums[l]);
                l++;
            }
        }
        while(k<=mid){
            temp.push_back(nums[k]);
            k++;
        }
        while(l<=j){
            temp.push_back(nums[l]);
            l++;
        }
        for(int x=i;x<=j;x++){
            nums[x]=temp[x-i];
        }
    }
    void mergesort(vector<int>&nums,int i,int j,int &ans){
        if(i>=j) return;
        int mid=(i+j)/2;
        mergesort(nums,i,mid,ans);
        mergesort(nums,mid+1,j,ans);
        merge(nums,i,mid,j,ans);
    }
    int reversePairs(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        mergesort(nums,0,n-1,ans);
        return ans;
    }
};