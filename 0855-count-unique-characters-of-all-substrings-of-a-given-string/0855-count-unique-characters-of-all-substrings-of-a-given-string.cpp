class Solution {
public:
    int uniqueLetterString(string s) {
        int n = s.length();
        vector<vector<int>> index(26);

        for(int i = 0; i < 26; i++) {
            index[i].push_back(-1);
        }
        for(int i = 0; i < n; i++) {
            index[s[i] - 'A'].push_back(i);
        }
        for(int i = 0; i < 26; i++) {
            index[i].push_back(n);
        }

        int result = 0;
        for(int i = 0; i < 26; i++) {
            for(int j = 1; j < index[i].size() - 1; j++) {
                result += (index[i][j] - index[i][j - 1]) * (index[i][j + 1] - index[i][j]);
            }
        }
        return result;
    }
};