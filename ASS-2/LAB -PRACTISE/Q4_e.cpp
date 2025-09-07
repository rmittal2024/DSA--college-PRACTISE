/* Q- Write a program to convert a character from uppercase to lowercase. 
*/
#include <iostream>
using namespace std;

int main() {
    char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char lowercase[] = "abcdefghijklmnopqrstuvwxyz";

    char ch = 'F';

    for (int i = 0; i < 26; i++) {
        if (ch == uppercase[i]) {
            ch = lowercase[i];
            break;
        }
    }

    cout << "Lowercase: " << ch;
    return 0;
}
