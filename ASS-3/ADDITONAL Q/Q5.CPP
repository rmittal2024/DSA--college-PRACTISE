#include <iostream>
using namespace std;

int main() {
    int A[] = {3,1,2};
    int n = 3;
    int B[100], btop=-1;
    int S[100], stop=-1;
    int next=1;
    for(int i=0;i<n;i++) {
        S[++stop]=A[i];
        while(stop>=0 && S[stop]==next) {
            B[++btop]=S[stop--];
            next++;
        }
    }
    bool sorted = true;
    for(int i=0;i<n;i++) {
        if(B[i]!=i+1) { sorted=false; break; }
    }
    cout<<(sorted?"YES":"NO");
}
