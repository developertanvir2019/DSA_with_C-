#include <bits/stdc++.h>
using namespace std;

int main (){
    vector<int>v={50,40,45,30,35,42,32,25,20,10};
    int x;
    cin>>x;
    v.push_back(x);
    int cur_idx=v.size()-1;
    cout<<cur_idx<<endl;
    return 0;
}