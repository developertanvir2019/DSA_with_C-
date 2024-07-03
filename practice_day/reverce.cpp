#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node *next;
    Node* prev;
    Node(int val){
    this->val=val;
    this->next=NULL;
    this->prev=NULL;
}
};
void insertAtTail(Node *&tail,int val){
    Node *newNode=new Node(val);

    if(tail!=NULL){
        tail->next=newNode;
        newNode->prev=tail;
    }
    tail=newNode; 
}


void reverseTheList(Node *head,Node *tail){
Node *i=head;
Node *j=tail;
while(i!=j && i->next!=j){
  swap(i->val,j->val);  
  i=i->next;
  j=j->prev;
}


}

void printList(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
    temp=temp->next;
    }
}

int main (){
    Node * head=NULL;
    Node* tail=NULL;
    while(1){
        int val;
        cin>>val;
        if(val==-1)break;
      if(head==NULL){
        head=new Node(val);
        tail=head;
      }else{
        insertAtTail(tail,val);
      }
    }
reverseTheList(head,tail);
printList(head);
    return 0;
}