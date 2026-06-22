class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int l =0, h =n-1;
        while(l<=h){
            int mid = l+ (h-l)/2;
            int prev = (mid-1+n)%n;
            int next = (mid+1)%n;
            
            if(nums[prev]>=nums[mid] && nums[next]>= nums[mid]){
                return nums[mid];
            }
            else if(nums[h]>= nums[mid]){
                h = mid-1;
            }else if(nums[l]<=nums[mid]){ // sorted left
                l = mid+1;
            }
        }
        return nums[0];
    }
};