/*
Q- Write a program to count the total number of distinct elements in an array of 
length 
n.
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

    int distinct = 0;
    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int j = 0; j < i; j++) {
            if (A[i] == A[j]) {
                found = true;
                break;
            }
        }
        if (!found) distinct++;
    }

    cout << "Total distinct elements = " << distinct << endl;
    return 0;
}
