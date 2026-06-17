class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //     vector<int>ans;
    //     int n = nums.size();
    //     int i=0, j = i+1;

    //     while(i<n && j<n){
    //         int sum = nums[i] + nums[j];
    //         if(sum == target){
    //             ans.push_back(i);
    //             ans.push_back(j);
    //             break;
    //         } else {
    //             j++;
    //         }
    //         i++;
    //     }
    //     return ans;
    // }

      unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};