#include<iostream>
using namespace std;

int find2n(int n) {
    //base case
    if(n == 0) {
        return 1;
    }

    return 2 * find2n(n-1);
}

int main() { 
    int n;

    cout << "Enter a number: " << endl;
    cin >> n;

    cout << "2^" << n << " is " << find2n(n) << endl;

    return 0;
}