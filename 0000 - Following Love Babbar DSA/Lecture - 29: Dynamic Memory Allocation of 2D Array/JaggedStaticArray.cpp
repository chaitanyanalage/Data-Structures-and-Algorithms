#include<iostream>
using namespace std;

int main() {
    int row1[] = {1, 2, 3, 4};
    int row2[] = {5, 6};
    int row3[] = {7, 8, 9};

    int* jagged[] = {row1, row2, row3};
    int size[] = {4, 2, 3}; 

    for(int i = 0; i < 3; i++) {
        int* ptr = jagged[i];

        for(int j = 0; j < size[i]; j++) {
            cout << *(ptr + j) << " ";
        } cout << endl;
    }
    return 0;
}