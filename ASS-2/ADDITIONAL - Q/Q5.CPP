#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,2,4,5};
    int n = 6;
    int temp[100];
    for(int i=0;i<n;i++) temp[i]=arr[i];
    int j=0;
    for(int i=0;i<n;i++) {
        if(j<n) arr[j++]=temp[i];
        if(temp[i]==2 && j<n) arr[j++]=2;
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
