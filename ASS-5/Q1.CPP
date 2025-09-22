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

    void insertAtBeginning(int v){
        Node* n=new Node(v);
        n->next=head;
        head=n;
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

    void insertBefore(int key,int v){
        if(head==NULL) return;
        if(head->val==key){
            insertAtBeginning(v);
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL && temp->next->val!=key) temp=temp->next;
        if(temp->next==NULL) return;
        Node* n=new Node(v);
        n->next=temp->next;
        temp->next=n;
    }

    void insertAfter(int key,int v){
        Node* temp=head;
        while(temp!=NULL && temp->val!=key) temp=temp->next;
        if(temp==NULL) return;
        Node* n=new Node(v);
        n->next=temp->next;
        temp->next=n;
    }

    void deleteAtBeginning(){
        if(head==NULL) return;
        Node* temp=head;
        head=head->next;
        delete temp;
    }

    void deleteAtEnd(){
        if(head==NULL) return;
        if(head->next==NULL){
            delete head;
            head=NULL;
            return;
        }
        Node* temp=head;
        while(temp->next->next!=NULL) temp=temp->next;
        delete temp->next;
        temp->next=NULL;
    }

    void deleteNode(int key){
        if(head==NULL) return;
        if(head->val==key){
            deleteAtBeginning();
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL && temp->next->val!=key) temp=temp->next;
        if(temp->next==NULL) return;
        Node* del=temp->next;
        temp->next=temp->next->next;
        delete del;
    }

    void search(int key){
        Node* temp=head;
        int pos=1;
        while(temp!=NULL){
            if(temp->val==key){
                cout<<"Found at position "<<pos<<endl;
                return;
            }
            temp=temp->next;
            pos++;
        }
        cout<<"Not found"<<endl;
    }

    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main(){
    LinkedList l;
    int choice,v,key;
    while(true){
        cout<<"\n1. Insert at Beginning";
        cout<<"\n2. Insert at End";
        cout<<"\n3. Insert Before";
        cout<<"\n4. Insert After";
        cout<<"\n5. Delete at Beginning";
        cout<<"\n6. Delete at End";
        cout<<"\n7. Delete Node";
        cout<<"\n8. Search";
        cout<<"\n9. Display";
        cout<<"\n10. Exit";
        cout<<"\nEnter choice: ";
        cin>>choice;
    switch(choice){
        case 1: cin>>v; l.insertAtBeginning(v); break;
        case 2: cin>>v; l.insertAtEnd(v); break;
        case 3: cin>>key>>v; l.insertBefore(key,v); break;
        case 4: cin>>key>>v; l.insertAfter(key,v); break;
        case 5: l.deleteAtBeginning(); break;
        case 6: l.deleteAtEnd(); break;
        case 7: cin>>key; l.deleteNode(key); break;
        case 8: cin>>key; l.search(key); break;
        case 9: l.display(); break;
        case 10: return 0;
        default: cout<<"Invalid"<<endl;
        }
    }
}