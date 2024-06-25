#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, int v) {
    Node *newNode = new Node(v);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void print_linked_list(Node *head) {
    cout << "your linked list: ";
    Node *tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main() {
    Node *head = NULL;
    while (true) {
        cout << "option 1: Insert at Tail" << endl;
        cout << "option 2: Print linked list" << endl;
        cout << "option 3: Insert at any position" << endl;
        cout << "option 4: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1) {
            cout << "please enter value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        } else if (op == 2) {
            print_linked_list(head);
        }else if(op==3){
            int pos,v;
            cout << "please enter position: ";
            cin>>pos;
            cout << "please enter value: ";
            cin>>v;
        }
         else if (op == 4) {
            break;
        } else {
            cout << "Invalid option. Please try again." << endl;
        }
    }
    return 0;
}
