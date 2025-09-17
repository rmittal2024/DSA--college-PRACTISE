#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,5,3,4,2};
    int n = 5;
    int k = 2;
    int count = 0;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            int diff = arr[i]-arr[j];
            if(diff<0) diff = -diff;
            if(diff==k) count++;
        }
    }
    cout<<count;
}
