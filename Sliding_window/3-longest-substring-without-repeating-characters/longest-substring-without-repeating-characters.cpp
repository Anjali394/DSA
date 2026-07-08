class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> lastIndex;
        int ans = 0;
        int i = 0;

        for (int j = 0; j < s.size(); j++) {

            if (lastIndex.count(s[j])) {
                i = max(i, lastIndex[s[j]] + 1);
            }

            lastIndex[s[j]] = j;
            ans = max(ans, j - i + 1);
        }

        return ans;
    }
};