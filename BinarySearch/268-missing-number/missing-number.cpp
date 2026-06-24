class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
    //    unordered_map<int, int> mp;
    //     for(int i =0; i<n; i++){
    //         mp[nums[i]]++; 
    //     }
    //     for (int i =0; i<=n; i++){
    //         if(mp.find(i)==mp.end()){
    //             return i;
    //         }
    //     }
    //     return -1;


    // O(1) - approach - sum of first n numbers = n * (n+1)/2;

    int expectedSum = n * (n+1)/2;
    int actual = 0;
    for(int i =0 ;i<n; i++){
        actual = actual+nums[i];
    }

    return expectedSum-actual;
    }
};