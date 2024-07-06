#include <bits/stdc++.h>
using namespace std;

void printL(const list<int> myList) {
    cout << "L -> ";
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;
}

void printR(const list<int> myList) {
    cout << "R -> ";
    for (auto it = myList.rbegin(); it != myList.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    int Q;
    cin >> Q;

    list<int> myList;

    for (int i = 0; i < Q; ++i) {
        int X, V;
        cin >> X >> V;

        if (X == 0) {
            myList.push_front(V);
        } else if (X == 1) {
            myList.push_back(V);
        } else if (X == 2) { 
            if (V >= 0 && V < myList.size()) {
        auto it = myList.begin();
        for (int i = 0; i < V; ++i) {
            ++it;  
        }
        myList.erase(it);
    }
}

        printL(myList);
        printR(myList);
    }

    return 0;
}
