/*
A B C
B C D
C D E
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
        while(j <= n) {
            cout << (char)(65 + i + j - 2) << " ";
            j = j + 1;
        }
        i = i + 1;
        cout << endl;
    }
    return 0;
}