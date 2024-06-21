#include<iostream>
using namespace std;

struct Pair {
    int min;
    int max;
};

Pair getMinMax(int arr[], int size) {
    Pair minmax;
    sort(arr, arr + size);
    minmax.min = arr[0];
    minmax.max = arr[size - 1];

    return minmax;
}

int main() {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    Pair minmax = getMinMax(arr, size);

    cout << "Minimum element is: " << minmax.min << endl;
    cout << "Maximum element is: " << minmax.max << endl;
}