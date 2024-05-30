#include<iostream>
#include<vector> 
using namespace std;

void insertionSort(vector<int>& arr, int size) {
    for(int i = 1; i < size; i++) {
        int temp = arr[i];
        int j = i - 1;
        
        for(; j >= 0; j--) {
            if(arr[j] > temp) {
                arr[j+1] = arr[j];   
            }
            else {
                break;
            }
        }
        arr[j+1] = temp;
    }
}

int main() {
    vector<int> arr {6,5,4,3,2,1};
    
    insertionSort(arr, arr.size());
    
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}