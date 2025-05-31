class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty()) {
            return true;
        }

        string temp;

        for(auto& a: s) {
            if(isalnum(a)) {
                temp.push_back(tolower(a));
            }
        }

        for(int left = 0, right = temp.size() - 1; left < right; left++, right--) {
            if(temp[left] != temp[right]) {
                return false;
            }
        }
        return true;
    }
};