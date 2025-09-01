#include <iostream>
using namespace std;

int arr[50];   // fixed array size
int n = 0;

void create(){
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void display(){
    if(n==0){
        cout<<"Array is empty"<<endl;
    }
    else{
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}

void insert(){
    int pos,ele;
    cout<<"Enter position : ";
    cin>>pos;
    cout<<"Enter element : ";
    cin>>ele;
    for(int i=n-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=ele;
    n++;
}

void del(){
    int pos;
    cout<<"Enter position : ";
    cin>>pos;
    for(int i=pos;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
}

void linear_search(){
    int key;
    cout<<"Enter element to search : ";
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"Element found at "<<i<<endl;
            return;
        }
    }
    cout<<"Element not found"<<endl;
}

int main(){
    int ch;
    while(1){
        cout<<"\n---MENU---\n";
        cout<<"1.CREATE\n2.DISPLAY\n3.INSERT\n4.DELETE\n5.LINEAR SEARCH\n6.EXIT\n";
        cout<<"Enter choice : ";
        cin>>ch;

        switch(ch){
            case 1: create(); break;
            case 2: display(); break;
            case 3: insert(); break;
            case 4: del(); break;
            case 5: linear_search(); break;
            case 6: return 0;
            default: cout<<"Wrong choice\n";
        }
    }
}
