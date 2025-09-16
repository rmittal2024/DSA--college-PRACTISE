#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> q1,q2;
    int ch,x;
    while(1){
        cin>>ch;
        if(ch==1){
            cin>>x;
            q2.push(x);
            while(!q1.empty()){q2.push(q1.front());q1.pop();}
            swap(q1,q2);
        }
        else if(ch==2){if(!q1.empty()) q1.pop();}
        else if(ch==3){if(!q1.empty()) cout<<q1.front()<<"\n";}
        else if(ch==4) cout<<(q1.empty()?"YES\n":"NO\n");
        else break;
    }
}
