/*Q- Write a program to sort the strings in alphabetical order.
*/
#include <iostream>
#include <cstring>  // only for strcpy, strcmp
using namespace std;

int main() {
    char arr[5][20] = {"banana", "apple", "cherry", "date", "grape"};
    int n = 5;
    char temp[20];

    // Bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j+1]) > 0) {   // manual compare
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
            }
        }
    }

    cout << "Sorted Strings: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

