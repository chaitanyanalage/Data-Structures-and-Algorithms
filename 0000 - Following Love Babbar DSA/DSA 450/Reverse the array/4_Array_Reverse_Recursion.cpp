#include<iostream>
#include<stack>
using namespace std;

void reversearr(int arr[], int size) {
    stack<int> st;

    for(int i = 0; i < size; i++) {
        st.push(arr[i]); 
    }

    for(int i = 0; i < size; i++) {
        arr[i] = st.top();
        st.pop();
    }
}

void printarr(int arr[], int size) {    
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    } cout << endl; 
}

int main() {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before reverse : ";
    printarr(arr, size);

    reversearr(arr, size);

    cout << "Array after reverse : ";
    printarr(arr, size);

    return 0;

}