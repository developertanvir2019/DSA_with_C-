#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node*next;
//     Node(int val){
// this->val=val;
// this->next=NULL;
//     }
};

int main (){
Node *x=new Node;
Node *y =new Node;
    x->val=10;
    y->val=20;
    x->next=y;
    y->next=NULL;

    cout<<x->val<<" "<<y->val<<endl;

    return 0;
}