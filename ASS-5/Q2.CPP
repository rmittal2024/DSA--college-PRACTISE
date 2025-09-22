#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node(int v){
        val=v;
        next=NULL;
    }
};

class LinkedList{
public:
    Node* head;
    LinkedList(){
        head=NULL;
    }

    void insertAtEnd(int v){
        Node* n=new Node(v);
        if(head==NULL){
            head=n;
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL) temp=temp->next;
        temp->next=n;
    }

    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val;
            if(temp->next!=NULL) cout<<"->";
            temp=temp->next;
        }
        cout<<endl;
    }

    int deleteOccurrences(int key){
        int count=0;
        while(head!=NULL && head->val==key){   
            Node* del=head;
            head=head->next;
            delete del;
            count++;
        }
        Node* temp=head;
        while(temp!=NULL && temp->next!=NULL){
            if(temp->next->val==key){
                Node* del=temp->next;
                temp->next=temp->next->next;
                delete del;
                count++;
            } else {
                temp=temp->next;
            }
        }
        return count;
    }
};

int main(){
    LinkedList l;
    l.insertAtEnd(1);
    l.insertAtEnd(2);
    l.insertAtEnd(1);
    l.insertAtEnd(2);
    l.insertAtEnd(1);
    l.insertAtEnd(3);
    l.insertAtEnd(1);

    cout<<"Original List: ";
    l.display();

    int key=1;
    int c=l.deleteOccurrences(key);

    cout<<"Count: "<<c<<endl;
    cout<<"Updated List: ";
    l.display();

    return 0;
}