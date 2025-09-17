#include <iostream>
using namespace std;

int main() {
    int n = 2;
    for(int i=1;i<=n;i++) {
        int num=i;
        int bin[32];
        int k=0;
        while(num>0) {
            bin[k++] = num%2;
            num/=2;
        }
        for(int j=k-1;j>=0;j--) cout<<bin[j];
        cout<<" ";
    }
}
