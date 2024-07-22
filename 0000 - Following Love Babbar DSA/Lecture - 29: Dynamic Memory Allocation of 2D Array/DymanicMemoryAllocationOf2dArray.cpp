#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    //creating 2D array
    int** arr = new int* [n];
    for(int i = 0; i < n; i++) {
        arr[i] = new int[n];
    }

    //taking input
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    cout << endl;

    //taking output
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        } cout << endl;
    }

    //releasingmwmory
     for(int i = 0; i < n; i++) {
        delete [] arr[i];
    }
}