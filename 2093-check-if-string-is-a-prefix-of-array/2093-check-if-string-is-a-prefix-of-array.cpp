class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string result = "";
        for(const string& word : words) {
            result += word;
            if(result == s) {
                return true;
            }
            if(result.length() > s.length()) {
                return false;
            }
        }
        return false;
    }
};