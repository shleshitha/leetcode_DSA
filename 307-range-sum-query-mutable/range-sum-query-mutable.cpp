class NumArray {
public:
    int n=0;
    vector<int>seg;
    NumArray(vector<int>& nums) {
        n=nums.size();
        seg.resize(4*n);
        build(nums,0,0,n-1);
        // for(auto i : seg)
        // cout<<i<<" ";
        // cout<<endl;
    }
    
    void update(int index, int val) {
        help(0,n-1,index,val,0);
    }
    
    int sumRange(int left, int right) {
        return query(0,n-1,left,right,0);
    }
    void help(int l,int r,int index,int val,int idx){
        if(l>index||r<index) return;
        if(l==index&&l==r){
            seg[idx]=val;
            return;
        }
        int mid=(l+r)/2;
        help(l,mid,index,val,2*idx+1);
        help(mid+1,r,index,val,2*idx+2);
        seg[idx]=seg[2*idx+1]+seg[2*idx+2];
    }
    int query(int l,int r,int left,int right,int idx){
        if(l>=left&&r<=right)
        return seg[idx];
        if(r<left || l>right)
        return 0;
        int mid=(l+r)/2;
        return query(l,mid,left,right,2*idx+1)+query(mid+1,r,left,right,2*idx+2);
    }
    void build(vector<int>&nums,int idx,int l,int r){
        if(l>r) return;
        if(l==r){
            seg[idx]=nums[l];
            return; 
        }
        int mid=(l+r)/2;
        build(nums,idx*2+1,l,mid);
        build(nums,idx*2+2,mid+1,r);
        seg[idx]=seg[2*idx+1]+seg[2*idx+2];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */