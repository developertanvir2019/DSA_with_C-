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


bool areListEqual(Node *head1,Node *head2){
Node *temp1=head1;
Node *temp2=head2;

while(temp1!=NULL &&temp2!=NULL){
    if(temp1->val!=temp2->val){
        return false;
    }
    temp1=temp1->next;
    temp2=temp2->next;
}
if (temp1 != NULL || temp2 != NULL) {
        return false;
    }
return true;
}

int main (){
    Node * head1=NULL;
    Node* tail1=NULL;
    Node * head2=NULL;
    Node* tail2=NULL;
    while(1){
        int val;
        cin>>val;
        if(val==-1)break;
      if(head1==NULL){
        head1=new Node(val);
        tail1=head1;
      }else{
        insertAtTail(tail1,val);
      }
    }
    while(1){
        int val;
        cin>>val;
        if(val==-1)break;
      if(head2==NULL){
        head2=new Node(val);
        tail2=head2;
      }else{
        insertAtTail(tail2,val);
      }
    }

if(areListEqual(head1,head2)){
    cout<<"equal";
}else{
    cout<<"Not equal";
}


    return 0;
}