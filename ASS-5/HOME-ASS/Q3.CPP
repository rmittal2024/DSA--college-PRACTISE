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

    int findMiddle(){
        if(head==NULL) return -1;
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow->val;
    }
};

int main(){
    LinkedList l;
    l.insertAtEnd(1);
    l.insertAtEnd(2);
    l.insertAtEnd(3);
    l.insertAtEnd(4);
    l.insertAtEnd(5);

    cout<<"List: ";
    l.display();

    cout<<"Middle: "<<l.findMiddle()<<endl;

    return 0;
}