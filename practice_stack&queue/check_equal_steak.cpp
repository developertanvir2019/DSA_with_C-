#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node *prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

class myStack{
    public:
    Node *head=NULL;
    Node  *tail=NULL;
    void push(int val){
        Node *newNode=new Node(val);
        if(head==NULL){
            head=newNode;
            tail=newNode;
            return;
        }
        newNode->prev=tail;
        tail->next=newNode;
        tail=tail->next;
    }
};
  bool compareSt(myStack &st1, myStack &st2) {
    Node *curr1 = st1.head;
    Node *curr2 = st2.head;

    while (curr1 != NULL && curr2 != NULL) {
        if (curr1->val != curr2->val) {
            return false;
        }
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    return (curr1 == NULL && curr2 == NULL);
}

int main (){
    myStack st1;
    int n1;
    cin>>n1;
    for(int i=0;i<n1;i++){
        int x;
        cin>>x;
        st1.push(x);
    }
    myStack st2;
    int n2;
    cin>>n2;
    for(int i=0;i<n2;i++){
        int x;
        cin>>x;
        st2.push(x);
    }

    if (compareSt(st1, st2)) {
        cout << "The stacks are equal." << endl;
    } else {
        cout << "The stacks are not equal." << endl;
    }
    return 0;
}