//Q-5. Write a program for the evaluation of a Postfix expression.

#include <iostream>
#include <string>
using namespace std;
int main() {
    string postfix;
    cout<<"Enter postfix expression: ";
    cin>>postfix;
    int st[100], top=-1;
    for(int i=0;i<postfix.length();i++) {
        char c = postfix[i];
        if(isdigit(c)) {
            st[++top] = c - '0';
        }
        else {
            int b = st[top--];
            int a = st[top--];
            if(c=='+') st[++top] = a + b;
            else if(c=='-') st[++top] = a - b;
            else if(c=='*') st[++top] = a * b;
            else if(c=='/') st[++top] = a / b;
        }
    }
    cout<<"Result: "<<st[top]<<endl;
    return 0;
}
