#include <iostream>
using namespace std;

struct Stack {
    int arr[1000];
    int top;
    int minVal;
    Stack() { top=-1; minVal=0; }

    void push(int x) {
        if(top==-1) { arr[++top]=x; minVal=x; }
        else if(x<minVal) { arr[++top]=2*x-minVal; minVal=x; }
        else arr[++top]=x;
    }

    void pop() {
        if(top==-1) return;
        int t = arr[top--];
        if(t<minVal) minVal=2*minVal-t;
    }

    int peek() {
        int t = arr[top];
        if(t<minVal) return minVal;
        return t;
    }

    int getMin() {
        return minVal;
    }
};

int main() {
    Stack s;
    s.push(3);
    s.push(5);
    cout<<s.getMin()<<" ";
    s.push(2);
    s.push(1);
    cout<<s.getMin()<<" ";
    s.pop();
    cout<<s.getMin()<<" ";
}
