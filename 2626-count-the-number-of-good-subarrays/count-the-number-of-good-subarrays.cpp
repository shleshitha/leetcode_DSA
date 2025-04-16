class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        long long ans = 0, pairs = 0;
        int n = nums.size();
        int left = 0;

        for (int right = 0; right < n; ++right) {
            // When we add nums[right], we gain `freq[nums[right]]` pairs
            pairs += freq[nums[right]];
            freq[nums[right]]++;

            // Shrink window from the left while we have enough pairs
            while (pairs >= k) {
                // All subarrays from [left, right] to [left, n-1] are valid
                ans += n - right;
                freq[nums[left]]--;
                pairs -= freq[nums[left]];
                left++;
            }
        }
        return ans;
    }
};
