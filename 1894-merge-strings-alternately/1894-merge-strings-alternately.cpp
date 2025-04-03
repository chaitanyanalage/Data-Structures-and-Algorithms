class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int length1 = word1.length();
        int length2 = word2.length();
        string merged;

        for(int i = 0; i < length1 || i < length2; i++) {
            if(i < length1) {
                merged = merged + word1[i];
            }
            if(i < length2) {
                merged = merged + word2[i];
            }
        }
        return merged;
    }
};