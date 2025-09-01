//  Design the logic to remove the duplicate elements from an Array and after the deletion the array should contain the unique elements. 

#include <iostream>
using namespace std;

int main(){
    int arr[50],n;
    cout<<"Enter size : ";
    cin>>n;
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<n-1;k++){
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }

    cout<<"After removing duplicates : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

