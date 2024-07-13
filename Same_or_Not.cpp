#include <bits/stdc++.h>
using namespace std;

int main (){
    int n,m;
    cin>>n>>m;
    stack<int> st;
    queue <int> q;
    for(int i=0;i<n;i++){
    int x;
cin>>x;
st.push(x);
    }
    for(int i=0;i<m;i++){
    int x;
cin>>x;
q.push(x);
    }
    bool flag=true;
if(n!=m){
  flag=false;
}else{
    while(!st.empty() && !q.empty()){
if(st.top()!=q.front()){
    flag=false;
    break;
}else{
    st.pop();
    q.pop();
}
    }
}
if(flag){
    cout<<"YES";
}else{
    cout<<"NO";
}
    return 0;
}