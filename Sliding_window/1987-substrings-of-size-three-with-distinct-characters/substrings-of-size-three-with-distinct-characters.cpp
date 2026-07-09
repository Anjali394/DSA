class Solution {
public:
    int countGoodSubstrings(string s) {
        int ans = 0;

        for (int i = 0; i + 2 < s.size(); i++) {
            set<char> st;
            st.insert(s[i]);
            st.insert(s[i + 1]);
            st.insert(s[i + 2]);

            if (st.size() == 3)
                ans++;
        }

        return ans;
    }
};