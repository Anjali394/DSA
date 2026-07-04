class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        priority_queue<int> maxh;
        unordered_map<int, string> mp;
        vector<string> ans;

        for (int s : score)
            maxh.push(s);

        int rank = 1;

        while (!maxh.empty()) {
            if (rank == 1)
                mp[maxh.top()] = "Gold Medal";
            else if (rank == 2)
                mp[maxh.top()] = "Silver Medal";
            else if (rank == 3)
                mp[maxh.top()] = "Bronze Medal";
            else
                mp[maxh.top()] = to_string(rank);

            maxh.pop();
            rank++;
        }

        for (int s : score)
            ans.push_back(mp[s]);

        return ans;
    }
};