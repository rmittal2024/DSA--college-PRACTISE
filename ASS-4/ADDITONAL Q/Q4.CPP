#include <iostream>
using namespace std;

int main() {
    int students[] = {1,1,0,0};
    int sandwiches[] = {0,1,0,1};
    int n = 4;
    int count = 0;

    for(int i=0;i<n;i++) {
        bool served = false;
        for(int j=0;j<n;j++) {
            if(students[j]==sandwiches[i]) {
                students[j]=-1;
                served=true;
                break;
            }
        }
        if(!served) break;
    }

    for(int i=0;i<n;i++) if(students[i]!=-1) count++;
    cout<<count;
}
