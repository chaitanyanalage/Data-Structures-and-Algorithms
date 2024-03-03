#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key) {
    
    //base case
    if(size == 0)
        return false;

    //processing
    if(key == arr[0])
        return true;
    else{
        bool remainingPart = linearSearch(arr + 1, size - 1, key);
        return remainingPart;
    }
}

int main() {
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int key = 5;
    bool ans = linearSearch(arr, size, key);

    if(ans)
        cout << "Element present in array" << endl;
    else
        cout << "Element absent in array" << endl; 
}