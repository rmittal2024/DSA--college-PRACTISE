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

    void display(Node* node){
        while(node!=NULL){
            cout<<node->val;
            if(node->next!=NULL) cout<<"->";
            node=node->next;
        }
        cout<<"->NULL"<<endl;
    }

    Node* reverseRec(Node* node){
        if(node==NULL || node->next==NULL) return node;
        Node* newHead=reverseRec(node->next);
        node->next->next=node;
        node->next=NULL;
        return newHead;
    }

    void reverse(){
        head=reverseRec(head);
    }
};

int main(){
    LinkedList l;
    l.insertAtEnd(1);
    l.insertAtEnd(2);
    l.insertAtEnd(3);
    l.insertAtEnd(4);

    cout<<"Original List: ";
    l.display(l.head);

    l.reverse();

    cout<<"Reversed List: ";
    l.display(l.head);

    return 0;
}