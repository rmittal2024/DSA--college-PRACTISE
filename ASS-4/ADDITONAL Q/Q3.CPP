#include <iostream>
using namespace std;

int main() {
    int Q[] = {5,1,2,3,4};
    int n = 5;
    int S[100], stop=-1;
    int next=1;
    int B[100], btop=-1;

    for(int i=0;i<n;i++) {
        int x = Q[i];
        S[++stop] = x;
        while(stop>=0 && S[stop]==next) {
            B[++btop] = S[stop--];
            next++;
        }
    }

    bool possible = true;
    for(int i=0;i<n;i++) {
        if(B[i]!=i+1) { possible=false; break; }
    }
    cout<<(possible?"Yes":"No");
}
