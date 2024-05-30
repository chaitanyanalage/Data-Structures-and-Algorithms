#include<iostream>
using namespace std;

int main() {
    int number, sum = 0;

    cout << "Enter Number: " << endl;
    cin >> number;

    int i = 0;
    while (i <= number) {
        sum = sum + i;
        i = i + 1;
    }

    cout << "Sum: " << sum << endl;

    return 0;
}