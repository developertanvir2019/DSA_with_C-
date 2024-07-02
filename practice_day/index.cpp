#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node* prev;
    Node(int data){
    this->data=data;
    this->next=NULL;
    this->prev=NULL;
}
};
void insertAtTail(Node *&head,int val){
    Node *newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        return;
    }
    Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=newNode;
    newNode->prev=newNode;
}

int main (){
    Node * head=NULL;
    while(1){
        int val;
        cin>>val;
        if(val==-1)break;
    }
    return 0;
}