#include<iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min_idx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(arr[min_idx], arr[i]);
    }
}

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        cout << "Enter the value: ";
        cin >> arr[i];
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    
    for (int k = 0; k < n; k++) {
        cout << arr[k] << " ";
    }

    return 0;
}
