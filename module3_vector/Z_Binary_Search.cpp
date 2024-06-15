#include <bits/stdc++.h>
using namespace std;

int main (){
    int n, q;
    cin >> n >> q;
    vector<int> A(n);
    unordered_set<int> elements; // To store the elements for fast lookup
    
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        elements.insert(A[i]);
    }
    
    int l;
    for (int i = 0; i < q; i++) {
        cin >> l;
        if (elements.find(l) != elements.end()) {
            cout << "found" << endl;
        } else {
            cout << "not found" << endl;
        }
    }
    
    return 0;
}
