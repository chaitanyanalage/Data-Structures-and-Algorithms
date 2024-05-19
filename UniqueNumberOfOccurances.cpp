#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int>& arr) {
    for(int i = 0; i < arr.size(); i++ ) {
        cout << arr[i] << " , ";
    }
    cout << endl;
}

bool uniqueOccurrences(vector<int>& arr) {
        vector<int> occurance(2001, 0);

        for(int i = 0; i < arr.size(); i++) {
            cout << occurance[arr[i] + 1000]++ << " , ";
        }
        cout << endl;

        printArray(arr);
        sort(occurance.begin(), occurance.end());
        printArray(arr);

        for(int i = 0; i < 2000; i++) {
            if(occurance[i] != 0 && occurance[i] == occurance[i+1]) 
                return false;
        }
        return true;
    }

int main() {
    vector<int> arr = {-3,0,1,-3,1,1,1,-3,10,0};
    cout << uniqueOccurrences(arr);

    return 0;
}