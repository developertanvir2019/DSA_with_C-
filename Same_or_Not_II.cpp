#include <bits/stdc++.h>
using namespace std;
class myStack
{
    public:
    list<int>l;
    void push(int val){
        l.push_back(val);
    }
    void pop(){
        l.pop_back();
    }
    int top(){
        return l.back();
    }
    int size(){
        return l.size();
    }
    bool empty (){
        if(l.size()==0){
            return true;
        }else{
            return false;
        }
    }

};


class myQueue 
{
public:
list<int>l;
void push(int val){
   l.push_back(val);
}

void pop(){
   l.pop_front();  
}

int front(){
    return l.front();
}
int size(){
    return l.size();
}
bool empty (){
  return l.empty();
}

};
int main (){
    int n,m;
    cin>>n>>m;
    myStack st;
    myQueue q;
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