#include<iostream>
using namespace std;

int sum(int arr[], int size) {

    //base case
    if(size == 0)
        return 0;
    if(size == 1)
        return 0;
    
    //processing
    int total = arr[0] + sum(arr + 1, size - 1);

    return total;
}

int main() {
    int arr[5] = {2,4,9,9,9};
    int size = 5;

    cout << "Sum of array is: " << sum(arr, size) << endl; 

}