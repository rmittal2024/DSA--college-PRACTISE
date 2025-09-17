#include <iostream>
using namespace std;

int main() {
    int q[] = {11,5,4,21};
    int n = 4;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-i-1;j++) {
            if(q[j]>q[j+1]) {
                int temp = q[j];
                q[j] = q[j+1];
                q[j+1] = temp;
            }
        }
    }
    for(int i=0;i<n;i++) cout<<q[i]<<" ";
}
