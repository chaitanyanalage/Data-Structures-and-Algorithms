#include<iostream>
using namespace std;

struct Pair {
    int min;
    int max;
};

Pair getMinMax(int arr[], int size) {
    Pair minmax;
    int i;

    if(size == 1) {
        minmax.min = arr[0];
        minmax.max = arr[0];
        return minmax;
    }

    if (arr[0] > arr[1]) {
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else {
        minmax.min = arr[0];
        minmax.max = arr[1];
    }

    for(i = 2; i < size; i++) {
        if(arr[i] > minmax.max) {
            minmax.max = arr[i];
        }
        else if(arr[i] < minmax.min) {
            minmax.min = arr[i];
        }
    }
    return minmax;
}

int main() {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    Pair minmax = getMinMax(arr, size);
    cout << "Minimum element is " << minmax.min << endl;
    cout << "Maximum element is " << minmax.max << endl;

    return 0;
}