class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int h = n-1;

        while(l<h){
            int mid = l + (h-l)/2;
            if(nums[mid]<nums[h]){ // the minimum is in the left half (including mid).
                h = mid; 
            } else if(nums[mid]>nums[h]){ //the minimum is in the right half.
                l =mid+1;
            } else{ // nums [mid] == nums[h] - we cannot determine the side, so shrink the search space.
                h--; 
            }

        }
        return nums[l];
    }
};