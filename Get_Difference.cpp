#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node *next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

 void insert_tail(Node *&head, Node*&tail,int val){
Node *newNode=new Node(val);
if(head==NULL){
    head=newNode;
    tail=newNode;
    return;
}
tail->next=newNode;
tail=newNode;
 };

void print_difference(Node*head){
Node *temp=head;
int min = INT_MAX;
int max = INT_MIN;
while(temp!=NULL){
if(min>temp->val){
    min=temp->val;
}
if(max<temp->val){
    max=temp->val;
}
temp=temp->next;
}

int diff=max-min;
cout<<diff<<endl;
};

int main (){
Node *head=NULL;
Node *tail=NULL;
int val;
while(true){
    cin>>val;
    if(val==-1){
        break;
    }
    insert_tail(head,tail,val);
}
print_difference(head);
    
    return 0;
}