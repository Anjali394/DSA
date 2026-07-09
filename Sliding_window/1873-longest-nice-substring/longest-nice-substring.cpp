class Solution {
public:
    string longestNiceSubstring(string s) {
        if(s.size() < 2) return "";
        unordered_set<char>set(begin(s), end(s));
        for(int i = 0; i < s.size(); i++) {
            if(!set.count((char)(s[i] ^ 32))) {    //  'a' ^ 32 = 65 and 'A' ^ 32 = 97 // by XOR with 32 we can change b|w lower and uppercase 
                string s1 = longestNiceSubstring(s.substr(0, i));
                string s2 = longestNiceSubstring(s.substr(i + 1));
                return s1.size() >= s2.size() ? s1 : s2;
            }
        }
        return s;
    }
};