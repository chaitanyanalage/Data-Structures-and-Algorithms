#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i) {

    int n = str.size();

    //base case
    if(i > n-i-1) 
        return true;

    if(str[i] != str[n-i-1])
        return false;
    else {
        //Recursive call
        return(checkPalindrome(str, i+1));
    }
}

int main() {

    string name = "abbabba";
    cout << endl;

    bool isPalindrome = checkPalindrome(name, 0);

    if(isPalindrome) {
        cout << "Its a Palindrome" << endl;
    }
    else {
        cout << "Its not a Palindrome" << endl;
    }

    return 0;
}