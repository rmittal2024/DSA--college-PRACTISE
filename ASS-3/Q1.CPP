/*Q-1. Develop a menu driven program demonstrating the following operations on a Stack
 using array: (i) push(), (ii) pop(), (iii) isEmpty(), (iv) isFull(), (v) display(), and 
 (vi) peek().*/


#include <iostream>
using namespace std;
int main() {
    int stack[100], n, top=-1, choice, val;
    cout<<"Enter size of stack: ";
    cin>>n;
    while(true) {
        cout<<"\n1.Push 2.Pop 3.isEmpty 4.isFull 5.Display 6.Peek 7.Exit\n";
        cin>>choice;
        switch(choice) {
            case 1:
                if(top==n-1) cout<<"Stack Overflow\n";
                else { cout<<"Enter value: "; cin>>val; stack[++top]=val; }
                break;
            case 2:
                if(top==-1) cout<<"Stack Underflow\n";
                else cout<<"Popped: "<<stack[top--]<<endl;
                break;
            case 3:
                if(top==-1) cout<<"Stack is Empty\n";
                else cout<<"Stack is not Empty\n";
                break;
            case 4:
                if(top==n-1) cout<<"Stack is Full\n";
                else cout<<"Stack is not Full\n";
                break;
            case 5:
                if(top==-1) cout<<"Stack is Empty\n";
                else { for(int i=top;i>=0;i--) cout<<stack[i]<<" "; cout<<endl; }
                break;
            case 6:
                if(top==-1) cout<<"Stack is Empty\n";
                else cout<<"Top element: "<<stack[top]<<endl;
                break;
            case 7:
                return 0;
            default:
                cout<<"Invalid choice\n";
        }
    }
}
