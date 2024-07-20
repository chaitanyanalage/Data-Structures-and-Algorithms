#include<iostream>
using namespace std;

void print(int *p) {
    cout << *p << endl;
}

void update(int *p) {
    *p = *p + 1;
}

int getsum(int *arr, int size) {
    cout << sizeof(arr) << endl;
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

int main() {
    int value = 5;
    int *p = &value;

    print(p);
    update(p);
    print(p);

    int arr[5] = {1,2,3,4,5};

    cout << "Sum = " << getsum(arr+3, 2) << endl;

    return 0;
}