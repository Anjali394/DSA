class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(), nums.end(), greater<int>());

        long long base = 0;
        for (int i = 0; i < k; i++)
            base += nums[i];

        long long ans = base;
        long long gain = 0;

        int cur = mul;

        for (int i = 0; i < k && cur > 1; i++, cur--) {
            gain += 1LL * nums[i] * (cur - 1);
            ans = max(ans, base + gain);
        }

        return ans;
        
    }
};