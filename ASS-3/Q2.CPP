//Q-2. Given a string, reverse it using STACK. For example “DataStructure” should be 
//output as “erutcurtSataD.”


#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cout<<"Enter string: ";
    cin>>s;
    char st[100];
    int top=-1;
    for(int i=0;i<s.length();i++) {
        st[++top]=s[i];
    }
    cout<<"Reversed string: ";
    while(top!=-1) {
        cout<<st[top--];
    }
    cout<<endl;
    return 0;
}
