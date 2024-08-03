class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_index = 0, t_index = 0;

        while(s_index < s.size() && t_index < t.size()) {
            if(s[s_index] == t[t_index]) {
                s_index++;
            }
            t_index++;
        }
        return s.size() == s_index;
    }
};