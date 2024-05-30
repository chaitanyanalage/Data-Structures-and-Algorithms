#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(key == arr[i]) {
            cout << "Element Present!" << endl;
            return true;
        }
    }
    cout << "Element Absent!" << endl;
    return false;
}

int main() {
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};

    linearSearch(arr, 10, 9);
    linearSearch(arr, 10, 20);

    return 0;
}