class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 0, sum =0;
        int ans =INT_MAX; 
        while(j<n){
            sum = sum + nums[j]; 
                  
            while(sum >= target ){
                ans = min(j-i+1, ans);
                sum = sum - nums[i];
                i++;
            }
            j++;
        }
        return ans == INT_MAX ? 0 : ans;
        
    }
};