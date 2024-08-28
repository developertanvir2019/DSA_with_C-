#include <bits/stdc++.h>
using namespace std;

int main (){
    map<string,int>mp;
    mp.insert({"sakib al hasan",75});
    mp.insert({"Tamim",35});

    for(auto it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" ";
    }
    cout<<mp["Tamim"];
    return 0;
}