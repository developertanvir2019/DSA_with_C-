#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void printList(Node* head, Node* tail) {
    cout << "L -> ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;

    cout << "R -> ";
    temp = tail;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        int X, V;
        cin >> X >> V;

        Node* newNode = new Node(V);

        if (X < 0) {
            cout << "Invalid" << endl;
            continue;
        }

        if (X == 0) {
            if (head == NULL) {
                head = newNode;
                tail = newNode;
            } else {
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            }
            printList(head, tail);
            continue;
        }

        Node* temp = head;
        int currentIndex = 0;

        while (temp != NULL && currentIndex < X - 1) {
            temp = temp->next;
            currentIndex++;
        }

        if (temp == NULL) {
            cout << "Invalid" << endl;
        } else if (temp->next == NULL) {
            temp->next = newNode;
            newNode->prev = temp;
            tail = newNode;
            printList(head, tail);
        } else {
            newNode->next = temp->next;
            newNode->prev = temp;
            temp->next->prev = newNode;
            temp->next = newNode;
            printList(head, tail);
        }
    }

    return 0;
}
