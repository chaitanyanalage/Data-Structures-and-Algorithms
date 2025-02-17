class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int carry = 0;
        int i = a.size() - 1;
        int j = b.size() - 1;

        while(i >= 0 || j >= 0 || carry) {
            if(i >= 0) {
                carry = carry + a[i--] - '0';
            }
            if(j >= 0) {
                carry = carry + b[j--] - '0';
            }
            ans += (carry % 2 + '0');
            carry = carry / 2;
        }
        reverse(begin(ans), end(ans));
        return ans;
    }
};