class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        // int expected = (n-1)*n/2;
        // int actual = 0;
        // for(int i=0; i<n; i++){
        //     actual = actual+nums[i];
        // }

        // return actual-expected; // 15-10 = 5
        unordered_map<int,int>mp;

        for(int i =0; i<n; i++){
            mp[nums[i]]++;
        }

        for(int i =0; i<n; i++){
            if(mp[i]>1){
                return i;
            }
        }

        return -1;
    }
};