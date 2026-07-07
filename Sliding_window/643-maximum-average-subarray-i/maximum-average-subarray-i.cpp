class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int i =0, j=0;
        int sum = 0;
        double maxAvg =INT_MIN;

        while(j<n){
            sum = sum+nums[j];
             if(j-i+1<k){
                j++;
             }
             else if(j-i+1==k){
                maxAvg = max(maxAvg, (double)sum/k);
                sum = sum-nums[i];
                i++; 
                j++;
                
             }
        }
        return maxAvg;
    }
};