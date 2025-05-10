class Solution {
public:
    string reversePrefix(string word, char ch) {
        int count = word.find(ch);

        if(count == string::npos) {
            return word;
        }

        for(int i = 0; i < count; i++, count--) {
            swap(word[i], word[count]);
        }
        return word;
    }
};