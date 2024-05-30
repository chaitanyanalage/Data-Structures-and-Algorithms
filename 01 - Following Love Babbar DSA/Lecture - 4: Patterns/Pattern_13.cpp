/*
A
B C
C D E
D E F G
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Number: " << endl;
    cin >> n;

    int i = 1;
    while(i <= n) {
        int j = 1;
        while(j <= i) {
            cout << (char)(65 + i + j - 2) << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}