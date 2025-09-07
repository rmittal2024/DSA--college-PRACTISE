/*
Q- Let A[1 …. n] be an array of n real numbers. A pair (A[i], A[j ]) is said to be an 
inversion if these numbers are out of order, i.e., i < j but A[i]>A[j ]. Write a program to 
count the number of inversions in an array.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int A[1000];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) cin >> A[i];

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (A[i] > A[j]) count++;
        }
    }

    cout << "Number of inversions = " << count << endl;
    return 0;
}
