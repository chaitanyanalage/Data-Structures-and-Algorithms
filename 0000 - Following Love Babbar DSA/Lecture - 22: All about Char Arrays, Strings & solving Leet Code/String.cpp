#include<iostream>
using namespace std;

char getMacOccCharacter(string s) {
    int arr[26] = {0};

    for(int i = 0; i < s.size(); i++) {
        char ch = s[i];
        int number = 0;
        if(ch >= 'a' && ch <= 'z') {
            number = ch - 'a'; 
        }
        else {
            number = ch - 'A';
        }
        arr[number]++;
    }

    int maxi = -1, ans = 0;
    for(int i = 0; i < 26; i++) {
        if(maxi < arr[i]) {
            ans = i;
            maxi = arr[i];
        }
    }
    
    char finalChar = 'a' + ans;

    return finalChar;
}

char toLowerCase(char ch) {
    if(ch >= 'a' && ch <= 'z') {
        return ch;
    }
    else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char name[], int n) {
    int s = 0;
    int e = n - 1;

    while(s < e) {
        if(toLowerCase(name[s++]) != toLowerCase(name[e--])) {
            return false;
        }
    }
    return true;
}

void reverse(char name[], int n) {
    int s = 0;
    int e = n - 1;

    while(s < e) {
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[]) {
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main() {

    char name[20];

    cout << "Enter your name: " << endl;
    cin >> name;
    //name[2] = '\0';

    cout << "Your name is ";
    cout << name << endl;

    int len = getLength(name);

    cout << "Length of string is ";
    cout << len << endl;

    reverse(name, len);

    cout << "Reverse of string is ";
    cout << name;

    cout << "Palindrome or Not Palindrome: ";
    cout << checkPalindrome(name, len) << endl;

    cout << "Character is " << toLowerCase('a') << endl;
    cout << "Character is " << toLowerCase('A') << endl;

    cout << "Maximum occuring character is ";
    cout << getMacOccCharacter(name) << endl;
 
    return 0;
}