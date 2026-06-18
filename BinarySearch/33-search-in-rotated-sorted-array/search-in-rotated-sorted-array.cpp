class Solution {
public:
    int binarySearch(vector<int>& nums, int low, int high, int target)
    {
        while(low<=high)
        {
            int mid = low+ (high-low)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid]>target)
                high = mid-1;
            else if(nums[mid]<target)
                low = mid+1;
        }
        return -1;
    };

    int getMinIndex(vector<int>& nums, int n)
    {
        int start = 0;
        int end = n-1;

        if(nums[start]<=nums[end]) return 0;

        while(start <= end)
        {
            int mid = start + (end-start)/2;
            int prev = (mid-1+n)%n;
            int next = (mid+1)%n;

            if(nums[prev] >= nums[mid] && nums[next] >= nums[mid])
                return mid;
            else if(nums[mid]<=nums[end])
            {
                end = mid-1;
            }
            else if(nums[start] <= nums[mid])
            {
                start = mid+1;
            }
        }

        return 0;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int minIndex = getMinIndex(nums, n);
        int searchLeft = binarySearch(nums, 0, minIndex-1, target);
        int searchRight = binarySearch(nums, minIndex, n-1, target);

        if(searchLeft == -1)
            return searchRight;
        else
            return searchLeft;
        
        return -1;
    }
};