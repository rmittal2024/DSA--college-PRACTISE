/* Q- design the Logic to Find a Missing Number in a Sorted Array. Given an array of 
n-1 distinct integers in the range of 1 to n, find the missing number in it in a Sorted 
Array 
(a) Linear time 

*/
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 5, 6};
    int n = 5; 
    int total = n + 1;

    int missing = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] != i+1) {
            missing = i+1;
            break;
        }
    }
    cout << "Missing number (Linear): " << missing << endl;

    
}
