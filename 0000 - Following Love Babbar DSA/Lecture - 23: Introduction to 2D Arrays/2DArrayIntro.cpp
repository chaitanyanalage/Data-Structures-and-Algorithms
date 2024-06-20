#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int i, int j) {
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; i < 4; j++) {
            if(arr[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}

void printSum(int arr[][4], int i, int j) {
    for(int i = 0; i < 3; i++) {
        int sum = 0;
        for(int j = 0; j < 4; j++) {
            sum = sum + arr[i][j];
        }
        cout << sum << " ";
    }
}

int main() {
    
    //creating 2d array
    int arr[3][4];

    //taking inputs
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    //printing 2d array
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //search element

    cout << "Enter the element to search: ";
    int target;
    cin >> target;

    if(isPresent (arr, target, 3, 4)) {
        cout << "Element is present." << endl; 
    }
    else {
        cout << "Element is absent. " << endl;
    }

    printSum(arr, 3, 4);


    return 0;

}