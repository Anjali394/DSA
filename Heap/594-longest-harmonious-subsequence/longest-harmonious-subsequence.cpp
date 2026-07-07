class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int num : nums)
            mp[num]++;

        int ans = 0;

        for(auto &x : mp){
            if(mp.count(x.first + 1)){
                ans = max(ans, x.second + mp[x.first + 1]);
            }
        }

        return ans;
    }
};