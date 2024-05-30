#include<iostream>
using namespace std;

int getMax(int num[], int size) {
    int max = INT_MIN;

    for(int i = 0; i < size; i++) {
        if(max < num[i]) {
            max = num[i];
        }
    }
    return max;
}

int getMin(int num[], int size) {
    int min = INT_MAX;

    for(int i = 0; i < size; i++) {
        if(min > num[i]) {
            min = num[i];
        }
    }
    return min;
}

int main() {
    int size;

    cout << "Enter array size: " << endl;
    cin >> size;

    int num[100];

    for(int i = 0; i < size; i++) {
        cin >> num[i];
    }

    cout << "Maximum value is " << getMax(num, size) << endl;
    cout << "Minimum value is " << getMin(num, size) << endl;

    return 0;
}