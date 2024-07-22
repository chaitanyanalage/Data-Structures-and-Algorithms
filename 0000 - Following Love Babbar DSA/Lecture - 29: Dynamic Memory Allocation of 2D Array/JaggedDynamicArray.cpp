#include<iostream>
using namespace std;

int main() {
    int row, col;
    row = 3;

    int** arr = new int*[row];
    int sizes[] = {4, 2, 3};

    for(int i = 0; i < row; i++) {
        *(arr + i) = new int[sizes[i]];
    }

    //taking input
    int num = 1;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < sizes[i]; j++) {
            // cin >> arr[i][j];
            arr[i][j] = num++;
        }
    }

    // taking output
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < sizes[i]; j++) {
            cout << arr[i][j];
        } cout << endl;
    }

    //releasing memory
    for(int i = 0; i < row; i++) {
        delete[] arr[i];
    }

    return 0;
}