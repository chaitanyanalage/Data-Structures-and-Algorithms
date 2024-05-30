#include<iostream>
using namespace std;

void printCounting(int n) {
    for(int i = 0; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    printCounting(10);
    
    return 0;
}