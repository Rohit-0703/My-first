#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;
    Node(int num){
        data=num;
        next=prev=NULL;
    }
};

Node* creation(){
    Node* first=new Node(1);
    Node* second=new Node(2);
    Node* third=new Node(3);
    Node* fourth=new Node(4);
    Node* fifth=new Node(5);
    Node* sixth=new Node(6);
    first->next=second;
    second->prev=first;
    second->next=third;
    third->prev=second;
    third->next=fourth;
    fourth->prev=third;
    fourth->next=fifth;
    fifth->prev=fourth;
    fifth->next=sixth;
    sixth->prev=fifth;
    return first;
}

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    Node* head=creation();
    print(head);

    return 0;
}
