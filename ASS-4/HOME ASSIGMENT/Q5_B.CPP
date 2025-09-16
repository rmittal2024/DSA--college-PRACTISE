#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> q;
    int ch,x;
    while(1){
        cin>>ch;
        if(ch==1){
            cin>>x;
            q.push(x);
            int sz=q.size();
            for(int i=0;i<sz-1;i++){q.push(q.front());q.pop();}
        }
        else if(ch==2){if(!q.empty()) q.pop();}
        else if(ch==3){if(!q.empty()) cout<<q.front()<<"\n";}
        else if(ch==4) cout<<(q.empty()?"YES\n":"NO\n");
        else break;
    }
}
