#include<iostream>
using namespace std;

void find2n(int n) {
    int num = 1;
    for(int i = 1; i <= n; i++) {
        num = num * 2;
    }
    cout << "2^" << n << " is " << num << endl;
}

int main() {
    int n;

    cout << "Enter a number: " << endl;
    cin >> n;

    find2n(n);

    return 0;
}