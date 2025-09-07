/*Q- Write a program to delete all the vowels from the string. 
*/
#include <iostream>
using namespace std;

int main() {
    char s[100] = "Education";
    char res[100];
    int i = 0, j = 0;

    while (s[i] != '\0') {
        char c = s[i];
        if (!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
              c=='A'||c=='E'||c=='I'||c=='O'||c=='U')) {
            res[j] = c;
            j++;
        }
        i++;
    }
    res[j] = '\0';

    cout << "Without vowels: " << res;
    return 0;
}
