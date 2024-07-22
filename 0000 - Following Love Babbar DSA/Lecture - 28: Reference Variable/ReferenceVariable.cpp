#include<iostream>
using namespace std;

int& func(int a) {
    int num = a;
    int& ans = num;
    return ans;
}

int* fun(int n) {
    int* ptr = &n;
    return ptr;
}

void updatePassByValue(int n) {
    n++;
}

void updatePassByReference(int& n) {
    n++;
}

int main() {
    int n = 5;

    cout << "before " << n << endl;
    updatePassByValue(n);
    cout << "after " << n << endl;

    cout << "before " << n << endl;
    updatePassByReference(n);
    cout << "after " << n << endl;


    func(n);
    fun(n);
}