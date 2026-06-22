class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
        int l =0, h = nums.size()-1;
        while(l<=h){
            int mid = l + (h-l)/2;

            if(nums[mid] == target){
                return true;
            } 
            
            if(nums[l] == nums[mid] && nums[mid]==nums[h]){ // handles duplicate
                l++;
                h--;
            }
            else if(nums[l]<=nums[mid]){ // left sorted  [l - mid]
                if(nums[l]<=target && target< nums[mid]){ // [l - target] - mid
                    h = mid-1;
                } else { // l - [mid - target]
                    l = mid +1;
                }
            } else { //right sorted. [ mid - h]
                if(nums[mid]< target && target <= nums[h]){ // mid - target - h
                    l = mid+1;
                } else { // mid -h - target
                    h = mid -1;
                }
            }
        }
        return false;
    }
};