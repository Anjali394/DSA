class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {

        vector<int> ans;
        int n = nums.size();

        for (int start = 0; start + k <= n; start++) {

            unordered_map<int,int> freq;

            for (int i = start; i < start + k; i++)
                freq[nums[i]]++;

            priority_queue<pair<int,int>,
                           vector<pair<int,int>>,
                           greater<pair<int,int>>> pq;

            for (auto &it : freq) {
                pq.push({it.second, it.first});

                if (pq.size() > x)
                    pq.pop();
            }

            int sum = 0;

            while (!pq.empty()) {
                sum += pq.top().first * pq.top().second;
                pq.pop();
            }

            ans.push_back(sum);
        }

        return ans;
    }
};