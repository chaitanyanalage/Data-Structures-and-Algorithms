/*
1
2 3
3 4 5
4 5 6 7
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Number: " << endl;
    cin >> n;

    int i = 1;
    int count = i;
    while(i <= n) {
        count = i;
        int j = 1;
        while(j <= i) {
            cout << count << " ";
            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
