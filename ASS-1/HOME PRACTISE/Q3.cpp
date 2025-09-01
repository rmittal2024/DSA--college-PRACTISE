//  Predict the Output of the following program 
#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1};
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    return 0;
}

/*
Output: 10000
Reason: first element is 1, rest default = 0
*/
