#include <bits/stdc++.h>
using namespace std;

int main (){
    stack<int> st;
    st.push(10);
    st.push(20);
    cout<<st.top()<<endl;

    if(!st.empty()){
    st.pop();
    }
    cout<<st.top()<<endl;
    return 0;
}