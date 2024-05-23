#include<iostream>
using namespace std;

void factorial(int n) {
    int sum = 1;

    for(int i = 1; i <= n; i++) {
        sum = sum * n;
    }

    cout << n << "^" << n << " is " << sum << endl;
}

int main() {
    int n;

    cout << "Enter a number: " << endl;
    cin >> n;

    factorial(n);

    return 0;
}