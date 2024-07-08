#include<iostream>
using namespace std;

int main() {
    int a,b;
    int result = 1;

    cout << "Enter a and b values: " << endl;
    cin >> a;
    cin >> b;

    for(int i = 0; i < min(a,b); i++) {
        if(a%i == 0 && b%i == 0) {
            result = i;
        }
    }

    cout << "GCD: " << result << endl;

}