class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        return {getfirst(nums,target), getlast(nums,target)};
    }

    int getfirst(vector<int>& nums, int target) {
        int l =0, h = nums.size()-1;
       
        int first = -1;
        while(l<=h){
             int mid = l+ (h-l)/2;
            if(nums[mid] == target){
                first  = mid;
                h = mid-1; // search left
            }
            else if(nums[mid]< target){
                l = mid+1;
            } else {
                h = mid-1;
            }
        }
        return first;
    }

    int getlast(vector<int>& nums, int target) {
        int l =0, h = nums.size()-1;
        int last = -1;
        while(l<=h){
             int mid = l+ (h-l)/2;
            if(nums[mid] == target){
                last  = mid;
                l = mid+1; // search right
            }
            else if(nums[mid]< target){
                l = mid+1;
            } else {
                h = mid-1;
            }
        }
        return last;
    }
};