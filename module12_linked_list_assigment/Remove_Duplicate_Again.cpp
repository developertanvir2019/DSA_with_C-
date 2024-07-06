#include <bits/stdc++.h>
using namespace std;

int main (){
    list <int> newList;
    int val;
    while(cin>>val &&val!=-1){
        newList.push_back(val);
    }
    newList.sort();
    newList.unique();
    for(int value:newList){
        cout<<value<<" ";
    }
    return 0;
}