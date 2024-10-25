class Solution {
public:
    bool isPalindrome(string s) {

        if(s.empty()) {
            return true;
        }

        string temp;

        for(auto& a : s) {
            if(isalnum(a)) {
                temp.push_back(tolower(a));
            }
        }

        for(int i = 0, j = temp.size() - 1; i < j; i++, j--) {
            if(temp[i] != temp[j]) {
                return false;
            }
        }
        return true;
    }
};