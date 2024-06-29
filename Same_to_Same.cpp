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


 void lists_equal(Node *head1, Node *head2) {
    Node *temp1 = head1;
    Node *temp2 = head2;
   bool flag= true;
    while (temp1 != NULL && temp2 != NULL) {
        if (temp1->val != temp2->val) {
          flag=false ;
          break;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if (temp1 != NULL || temp2 != NULL) {
        flag = false;
    }
   if(flag){
    cout<<"YES";
   }else{
    cout<<"NO";
   }
}

void print_list(Node*head){
Node *temp=head;
while(temp!=NULL){
cout<<temp->val<<" "; 
temp=temp->next;
}
cout<<endl;
};

int main (){
Node *head1=NULL;
Node *tail1=NULL;
Node *head2=NULL;
Node *tail2=NULL;
int val;
while(true){
    cin>>val;
    if(val==-1){
        break;
    }
    insert_tail(head1,tail1,val);
}
while(true){
    cin>>val;
    if(val==-1){
        break;
    }
    insert_tail(head2,tail2,val);
}
lists_equal(head1,head2);
    
    return 0;
}