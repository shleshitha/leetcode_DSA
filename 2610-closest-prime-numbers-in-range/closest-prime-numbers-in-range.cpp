class Solution {
public:
    // set<int>prime_numbers={2,3};
    bool isprime(int n){
        // if(prime_numbers.find(n)!=prime_numbers.end()) return true;
        if(n==1) return false;
        if(n==2||n==3) return true;
        for(int i=2;i<n;i++){
            if(n%i==0) return false;
        }
        // prime_numbers.insert(n);
        return true;
    }
    int least_multiple(int x, int left){
        for(int i=left;i<=left*x;i++){
            if(i%x==0) return i;
        }
        return 0;
    }
    template<typename T>
    void display(vector<T>v){
        for(int i : v)
        cout<<i<<" ";
        cout<<endl;
    }
    vector<int> generate_primes(int left, int right) {
    vector<bool> v(right - left + 1, true);
    
    // Handle edge case where left == 1
    if (left == 1) v[0] = false;

    // Apply the segmented sieve
    for (int i = 2; i * i <= right; i++) {
        if (isprime(i)) {
            int start = max(i * i, least_multiple(i, left));
            for (int j = start; j <= right; j += i) {
                v[j - left] = false;
            }
        }
    }

    // Collect the prime numbers
    vector<int> primes;
    for (int i = 0; i < v.size(); i++) {
        if (v[i]) {
            primes.push_back(left + i);
        }
    }
    return primes;
}
    vector<int> closestPrimes(int left, int right) {
        vector<int>primes=generate_primes(left,right);
        display(primes);
        if(primes.size()<2)
        return {-1,-1};
        vector<int>ans={primes[0],primes[1]};
        int diff=primes[1]-primes[0];
        for(int i=1;i<primes.size()-1;i++){
            if(primes[i+1]-primes[i]<diff){
                ans[0]=primes[i];
                ans[1]=primes[i+1];
                diff=primes[i+1]-primes[i];
            }
        }
        return ans;
    }
};