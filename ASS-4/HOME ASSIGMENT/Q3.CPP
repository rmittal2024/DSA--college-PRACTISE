#include<iostream>
using namespace std;


void interleave(int arr[], int n) {
    if (n % 2 != 0) {
        cout << "Array size should be even!" << endl;
        return;
    }
    int half = n / 2;
    int result[n];
    int i = 0, j = half, k = 0;
    while (i < half && j < n) {
        result[k++] = arr[i++];
        result[k++] = arr[j++];
    }
    for (int m = 0; m < n; m++) {
        arr[m] = result[m];
    }
}

int main() {
    int arr[] = {4, 7, 11, 20, 5, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    interleave(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}