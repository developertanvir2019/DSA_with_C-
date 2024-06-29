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


void remove_duplicates(Node *&head) {
    Node *temp = head;

    while (temp != NULL) {
        Node *nexTemp = temp;
        while (nexTemp->next != NULL) {
            if (nexTemp->next->val == temp->val) {
                Node *temp = nexTemp->next;
                nexTemp->next = nexTemp->next->next;
                delete temp;
            } else {
                nexTemp = nexTemp->next;
            }
        }
        temp = temp->next;
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

remove_duplicates(head);
print_list(head);
    
    return 0;
}