/*Q- Design the Logic to Find a Missing Number in a Sorted Array. Given an array of 
n-1 distinct integers in the range of 1 to n, find the missing number in it in a Sorted 
Array  
(b) Using binary search. 
*/

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 5, 6};
    int n = 5;
    int total = n + 1;

    int low = 0, high = n-1;
    while (low <= high) {
        int mid = (low+high)/2;
        if (arr[mid] == mid+1) low = mid+1;
        else high = mid-1;
    }
    cout << "Missing number (Binary): " << low+1 << endl;
}
