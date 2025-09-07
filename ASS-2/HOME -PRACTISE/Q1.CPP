/* Q - Implement the binary search algorithm regarded as a fast search algorithm 
with run-time complexity of Ο(log n) in comparison to the Linear Search. 
*/
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, key = 30;

    // Linear Search
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i;
            break;
        }
    }
    cout << "Linear Search index: " << index << endl;

    // Binary Search
    int low = 0, high = n - 1, mid;
    index = -1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            index = mid;
            break;
        } else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    cout << "Binary Search index: " << index << endl;
}
