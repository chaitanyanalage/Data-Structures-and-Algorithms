class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        s = s + " ";
        
        string ans = "", temp = "";
        
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == ' ') {
                if(temp != "") {
                    ans = temp + " " + ans;
                }
                temp = "";
            }
            else {
                temp = temp + s[i];
            }
        }
        return ans.substr(0, ans.size() - 1);
    }
};