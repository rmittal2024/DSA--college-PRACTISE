//  Write a program to find sum of every row and every column in a two-dimensional  array.  

#include <iostream>
using namespace std;

int main(){
    int a[10][10],r,c,sum;
    cout<<"Enter rows and cols : ";
    cin>>r>>c;
    cout<<"Enter elements :\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<r;i++){
        sum=0;
        for(int j=0;j<c;j++){
            sum=sum+a[i][j];
        }
        cout<<"Sum of row "<<i<<" = "<<sum<<"\n";
    }

    for(int j=0;j<c;j++){
        sum=0;
        for(int i=0;i<r;i++){
            sum=sum+a[i][j];
        }
        cout<<"Sum of col "<<j<<" = "<<sum<<"\n";
    }
    return 0;
}
