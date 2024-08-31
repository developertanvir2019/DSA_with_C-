#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int> unique_val;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            unique_val.insert(x);
        }
        for(int val:unique_val){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}