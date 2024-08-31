#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    priority_queue<int, vector<int>, greater<int>> pq_list;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pq_list.push(x);
    }
    
    int q;
    cin >> q;
    
    while (q--) {
        int command;
        cin >> command;
        
        if (command == 0) {
            int x;
            cin >> x;
            pq_list.push(x);
            cout << pq_list.top() << endl;
        } else if (command == 1) {
            if (pq_list.empty()) {
                cout << "Empty" << endl;
            } else {
                cout << pq_list.top() << endl;
            }
        } else if (command == 2) {
            if (pq_list.empty()) {
                cout << "Empty" << endl;
            } else {
                pq_list.pop();
                if (pq_list.empty()) {
                    cout << "Empty" << endl;
                } else {
                    cout << pq_list.top() << endl;
                }
            }
        }
    }
    
    return 0;
}
