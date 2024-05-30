/*
A A A
B B B
C C C
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
            cout << (char)(65 + i - 1) << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}