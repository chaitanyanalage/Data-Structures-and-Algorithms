#include<iostream>
using namespace std;

void print(int arr[], int s, int e) {
    for(int i = s; i < e; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

bool binarySearch(int arr[], int start, int end, int key){
    
    cout << endl;
    print(arr, start, end);

    //base case
    //element not found
    if(start > end)
        return false;
    
    int mid = start + (end - start) / 2;

    //element found
    if(arr[mid] == key)
        return true;

    if(arr[mid] < key) {
        return binarySearch(arr, mid + 1, end, key);
    }
    else {
        return binarySearch(arr, start, mid - 1, key);
    }
    
}

int main() {
    int arr[6] = {2,4,5,10,14,16};
    int start = 0;
    int end = 5; 
    int key = 16;

    bool ans = binarySearch(arr, start, end, key);

    if(ans)
        cout << "Element is present in array" << endl;
    else
        cout << "Element is absent in array" << endl;

}