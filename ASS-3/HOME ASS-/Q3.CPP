//Q-3. Write a program that checks if an expression has balanced parentheses.

#include <iostream>
#include <string>
using namespace std;
int main() {
    string exp;
    cout<<"Enter expression: ";
    cin>>exp;
    char st[100];
    int top=-1;
    bool ok=true;
    for(int i=0;i<exp.length();i++) {
        char c = exp[i];
        if(c=='(' || c=='{' || c=='[') {
            st[++top]=c;
        }
        else if(c==')') {
            if(top==-1 || st[top--] != '(') { ok=false; break; }
        }
        else if(c=='}') {
            if(top==-1 || st[top--] != '{') { ok=false; break; }
        }
        else if(c==']') {
            if(top==-1 || st[top--] != '[') { ok=false; break; }
        }
    }
    if(top!=-1) ok=false;
    if(ok) cout<<"Balanced\n";
    else cout<<"Not Balanced\n";
    return 0;
}
