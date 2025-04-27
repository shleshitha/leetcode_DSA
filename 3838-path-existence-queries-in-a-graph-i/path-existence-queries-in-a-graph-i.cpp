class Solution {
public:
    vector<int>size,parent;
    void init(int n){
        size.resize(n);
        parent.resize(n);
        for(int i=0;i<n;i++){
            size[i]=1;
            parent[i]=i;
        }
    }
    int find(int u){
        if(u==parent[u])
        return u;
        return parent[u]=find(parent[u]);
    }

    void unionSet (int u, int v){
        int pu=find(u), pv=find(v);
        if(pu==pv)
        return;
        if(size[pu]<size[pv]){
            parent[pu]=pv;
            size[pv]+=size[pu];
        }
        else{
            parent[pv]=pu;
            size[pu]+=size[pv];
        }
    }
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
    init(n); 

    vector<pair<int, int>> arr; // (value, index)
    for (int i = 0; i < n; i++) {
        arr.push_back({nums[i], i});
    }

    // sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1].first - arr[i].first <= maxDiff) {
            unionSet(arr[i].second, arr[i + 1].second);
        }
    }

    // Now answer the queries
    vector<bool> res;
    for (auto& q : queries) {
        int u = q[0], v = q[1];
        res.push_back(find(u) == find(v));
    }
    return res;
    }
};