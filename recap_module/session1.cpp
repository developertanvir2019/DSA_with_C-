#include <bits/stdc++.h>
using namespace std;


class Node{
    public:
        int val;
        Node * next;
        Node(int val){
            this->val=val;
            this->next=NULL;
        }
};
void printList(Node*head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
void insertTail(int val,Node*& head){
Node *newNode=new Node(val);
if(head==NULL){
    head=newNode;
    return;
}
Node *tmp=head;
while(tmp->next!=NULL){
    tmp=tmp->next;
}
tmp->next=newNode; 
}
void insertHead(int val,Node*& head){
Node *newNode=new Node(val);
if(head==NULL){
    head=newNode;
    return;
}
newNode->next=head;
head=newNode;
}

int main (){
    Node *a =new Node(1);
    Node*b=new Node(2);
    Node*c=new Node(3);
    a->next=b;
    b->next=c;
    printList(a);
    return 0;
} 