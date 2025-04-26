class Solution {
public:
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while(left < right) {
            if(s[left] != s[right]) {
                return isPlaindrome(s, left + 1, right) || isPlaindrome(s, left, right - 1);
            }
            left++;
            right--;
        }
        return true;
    }

    bool isPlaindrome(string& s, int left, int right) {
        while(left < right) {
            if(s[left] != s[right]) return false;
                left++;
                right--;
        }
        return true;
    }
};