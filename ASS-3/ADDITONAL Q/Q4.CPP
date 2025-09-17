#include <iostream>
using namespace std;

int main() {
    int temp[] = {73,74,75,71,69,72,76,73};
    int n = 8;
    int ans[8];
    for(int i=0;i<n;i++) {
        ans[i]=0;
        for(int j=i+1;j<n;j++) {
            if(temp[j]>temp[i]) { ans[i]=j-i; break; }
        }
    }
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
}
