#include <iostream>
using namespace std;

int main() {
    int arr[] = {4,5,2,25};
    int n = 4;
    for(int i=0;i<n;i++) {
        int nge=-1;
        for(int j=i+1;j<n;j++) {
            if(arr[j]>arr[i]) { nge=arr[j]; break; }
        }
        cout<<nge<<" ";
    }
}
