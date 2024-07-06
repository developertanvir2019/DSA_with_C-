#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    string val;
    Node* next;
    Node* prev;
    Node(string val) {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertAtTail(Node*& head, Node*& tail, string val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}
int main() {
    Node* head = NULL;
    Node* tail = NULL;

    string address;
    while (cin >> address && address != "end") {
        insertAtTail(head, tail, address);
    }

    int Q;
    cin >> Q;
    cin.ignore();

    Node* current = head;

    for (int i = 0; i < Q; ++i) {
        string command;
        getline(cin, command);
        stringstream ss(command);
        string action;
        ss >> action;

        if (action == "visit") {
            string visitAddress;
            ss >> visitAddress;
            Node* temp = head;
            while (temp && temp->val != visitAddress) {
                temp = temp->next;
            }
            if (temp) {
                current = temp;
                cout << visitAddress << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if (action == "next") {
            if (current && current->next) {
                current = current->next;
                cout << current->val << endl;
            } else {
                cout << "Not Available" << endl;
            }
        } else if (action == "prev") {
            if (current && current->prev) {
                current = current->prev;
                cout << current->val << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
