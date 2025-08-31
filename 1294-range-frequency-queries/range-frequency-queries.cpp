class RangeFreqQuery {
public:
    vector<map<int,int>>tree;
    int n=0;
    RangeFreqQuery(vector<int>& arr) {
        n=arr.size();
        tree.resize(4*n);
        build(0,n-1,arr,0);
        // int i=0;
        // for(auto mp : tree){
        //     cout<<i<<endl;
        //     for(auto &[k,v] : mp){
        //         cout<<k<<" "<<v<<endl;
        //     }
        //     i++;
        // }
    }
    
    int query(int left, int right, int value) {
        return query(0,n-1,left,right,value,0);
    }
    int query(int l,int r,int left,int right,int val,int idx){
        if(l>=left&&r<=right){
            return tree[idx][val];
        }
        if(l>right || r<left)
        return 0;
        int mid=(l+r)/2;
        return query(l,mid,left,right,val,2*idx+1)+query(mid+1,r,left,right,val,2*idx+2);

    }
    void build(int l,int r,vector<int>& ar,int idx){
        if(l>r) return;
        if(l==r){
            tree[idx][ar[l]]=1;
            return;
        }
        int mid=(l+r)/2;
        build(l,mid,ar,2*idx+1);
        build(mid+1,r,ar,2*idx+2);
        tree[idx]=tree[2*idx+1];
        for(auto [k,v] :tree[2*idx+2]){
            tree[idx][k]+=v;
        }
    }
};

/**
 * Your RangeFreqQuery object will be instantiated and called as such:
 * RangeFreqQuery* obj = new RangeFreqQuery(arr);
 * int param_1 = obj->query(left,right,value);
 */