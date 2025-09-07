//Q-4. Write a program to convert an Infix expression into a Postfix expression.


#include <iostream>
#include <string>
using namespace std;

int prec(char c) {
    if(c=='^') return 3;
    else if(c=='*' || c=='/') return 2;
    else if(c=='+' || c=='-') return 1;
    else return -1;
}

int main() {
    string infix, postfix="";
    cout<<"Enter infix expression: ";
    cin>>infix;
    char st[100];
    int top=-1;
    for(int i=0;i<infix.length();i++) {
        char c = infix[i];
        if(isalnum(c)) {
            postfix += c;
        }
        else if(c=='(') {
            st[++top] = c;
        }
        else if(c==')') {
            while(top!=-1 && st[top] != '(') {
                postfix += st[top--];
            }
            if(top!=-1) top--; 
        }
        else {
            while(top!=-1 && prec(st[top]) >= prec(c)) {
                postfix += st[top--];
            }
            st[++top] = c;
        }
    }
    while(top!=-1) {
        postfix += st[top--];
    }
    cout<<"Postfix: "<<postfix<<endl;
    return 0;
}
