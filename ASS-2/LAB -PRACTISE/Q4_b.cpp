/*Q- b) Write a program to reverse a string.
*/
#include <iostream>
using namespace std;

int main() {
    char str[100] = "raghav";
    int len = 0;

    while (str[len] != '\0') len++;  

    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    cout << "Reversed String: " << str;
    return 0;
}
