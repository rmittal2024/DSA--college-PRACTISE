#include <iostream>
#include <string>
using namespace std;

bool isSubstring(string small, string big) {
    for(int i=0;i<=big.length()-small.length();i++) {
        int j;
        for(j=0;j<small.length();j++) {
            if(big[i+j]!=small[j]) break;
        }
        if(j==small.length()) return true;
    }
    return false;
}

int main() {
    string s = "abcab";
    bool found = false;
    for(int i=1;i<s.length();i++) {
        string part = s.substr(0,i);
        string rem = s.substr(i);
        if(isSubstring(part, rem)) {
            found = true;
            break;
        }
    }
    cout<<(found?"YES":"NO");
}
