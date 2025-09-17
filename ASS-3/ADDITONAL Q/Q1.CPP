#include <iostream>
using namespace std;

int main() {
    int arr[] = {4,5,2,10,8};
    int n = 5;
    for(int i=0;i<n;i++) {
        int nearest=-1;
        for(int j=i-1;j>=0;j--) {
            if(arr[j]<arr[i]) {
                nearest=arr[j];
                break;
            }
        }
        cout<<nearest<<" ";
    }
}
