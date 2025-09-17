#include <iostream>
using namespace std;

void sortString(char str[], int n) {
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if(str[i]>str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char str1[] = "listen";
    char str2[] = "silent";
    int n = 6;
    sortString(str1,n);
    sortString(str2,n);
    bool same = true;
    for(int i=0;i<n;i++) {
        if(str1[i]!=str2[i]) same=false;
    }
    cout<<(same?"YES":"NO");
}
