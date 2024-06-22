#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; 
    
    vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];  
    }
    
    vector<int> duplicate;
    
    bool flag=false;
    for (int i = 0; i < n; ++i) {
        auto it = find(duplicate.begin(), duplicate.end(), A[i]);
        if (it != duplicate.end()) {
          flag=true;
        }
        duplicate.push_back(A[i]);
    }
    if(flag){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
