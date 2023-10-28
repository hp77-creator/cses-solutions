//
// Created by himanshu.pandey on 28/10/23.
//
#include <bits/stdc++.h>

using namespace std;

void solve(string prefix, string suffix, set<string> &res){
    if(suffix.size() == 0){
        res.insert(prefix);
        return;
    }
    for(int i = 0; i < suffix.length(); i++){
        solve(prefix + suffix[i], suffix.substr(0, i) + suffix.substr(i+1), res);
    }
}


int main(){
   string s; cin>>s;
   set<string> res;
   solve("",s, res);
   cout<<res.size()<<"\n";
   for(string i: res) cout<<i<<"\n";
}

