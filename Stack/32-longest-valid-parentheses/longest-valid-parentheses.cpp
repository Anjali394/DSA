class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);

        int ans = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(i);
            } else {
                st.pop();

                if (st.empty()) {
                    st.push(i);
                } else {
                    ans = max(ans, i - st.top());
                    // The stack stores indices, not characters.
                    // the current valid substring starts at st.top() + 1 and ends at i.
                    // i - st.top() -->length of valid substring
                }
            }
        }

        return ans;
    }
};