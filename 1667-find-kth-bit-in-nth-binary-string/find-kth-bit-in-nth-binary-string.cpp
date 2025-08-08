class Solution {
public:
   
    char findKthBit(int n, int k) {
        if(n==1)
        return '0';
        int mid=pow(2,n)/2;
        if(k<mid)
        return findKthBit(n-1,k);
        else if(k>mid)
        return findKthBit(n-1,mid-(k-mid))=='0'?'1':'0';
        else
        return '1';
    }
};