#include <bits/stdc++.h>
using namespace std;


class Node{
public:
int val;
Node *next;
Node(int val){
    this->val=val;
    this->next=NULL;
}
};


 void insert_at_tail(Node *&head, Node*&tail,int val){
    Node *newNode= new Node(val);

if(head==NULL){
    head=newNode;
    tail=newNode;
  return;
}
tail->next=newNode;
tail=newNode;
}
 void insert_at_head(Node *&head, Node*&tail,int val){
    Node *newNode= new Node(val);

if(head==NULL){
    head=newNode;
    tail=newNode;
  return;
}
newNode->next=head;
head=newNode;
}


void delete_at_index(Node *&head, Node *&tail, int index) {
    if (head == NULL) return;

    if (index == 0) {
        Node *temp = head;
        head = head->next;
        if (head == NULL) tail = NULL;
        delete temp;
        return;
    }
    Node *current = head;
    for (int i = 0; current != NULL && i < index - 1; ++i) {
        current = current->next;
    }

    if (current == NULL || current->next == NULL) return; 

    Node *temp = current->next;
    current->next = temp->next;
    if (current->next == NULL) tail = current; 
    delete temp;
}

void print_val(Node *head){
Node *temp=head;
while(temp!=NULL){
    cout<<temp->val<<" ";
    temp=temp->next;
}

}

int main (){
    Node *head=NULL;
    Node *tail=NULL;

    int q;
    cin>>q;
    while(q--){
        int x,v;
        cin>>x>>v;
        if(x==1){
           insert_at_tail(head,tail,v); 
        }else if(x==0){
insert_at_head(head,tail,v);
        }else if(x==2){
            delete_at_index(head,tail,v);
        }
    print_val(head);
    cout<<endl;
    }
    
    return 0;
}