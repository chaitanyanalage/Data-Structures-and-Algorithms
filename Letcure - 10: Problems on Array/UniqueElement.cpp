#include<iostream>
using namespace std;

int uniqueNumber(int arr[], int size) {
    int ans = 0;

    for(int i = 0; i < size; i++) {

        cout << ans << "," << arr[i];
        ans = ans^arr[i];
        cout << " : " << ans << endl;
    }
    return ans;
}

int main() {
    int arr[9] = {9,8,8,9,4,3,4,6,3};

    cout << "Unique Number is : " << uniqueNumber(arr, 9) << endl;
}