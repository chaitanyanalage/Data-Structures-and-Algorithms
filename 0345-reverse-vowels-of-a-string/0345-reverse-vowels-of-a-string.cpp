class Solution {
public:
    string reverseVowels(string s) {
        int start = 0;
        int end = s.length() - 1;
        string vowels = "aeiouAEIOU";
        string words = s;

        while(start < end) {
            while(start < end && vowels.find(words[start]) == string::npos) {
                start++;
            }

            while(start < end && vowels.find(words[end]) == string::npos) {
                end--;
            }

            swap(words[start], words[end]);

            start++;
            end--;
        }
        return words;
    }
};