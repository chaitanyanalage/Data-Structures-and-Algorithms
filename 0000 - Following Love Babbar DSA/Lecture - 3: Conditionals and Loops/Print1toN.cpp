#include<iostream>
using namespace std;

int main() {
    int number;
    
    cout << "Enter Number: " << endl;
    cin >> number;

    int i = 1;
    while(i <= number) {
        cout << i << " ";
        i = i + 1;
    }
    return 0;
}