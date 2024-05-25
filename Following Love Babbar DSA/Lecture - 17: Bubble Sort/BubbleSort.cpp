#include<iostream>
#include <vector> 
using namespace std;

void bubbleSort(vector<int>& arr, int n)
{   
    for(int i = 1; i<n; i++) {

        bool swapped = false;
        for(int j = 0; j<n-i; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
            break;
    }
}

int main() {

    vector<int> arr{2,3,4,5};

    bubbleSort(arr, arr.size());

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}