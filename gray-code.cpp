//
// Created by himanshu.pandey on 27/10/23.
//
#include <bits/stdc++.h>
using namespace std;

void utility(string &s, int n, vector<string> &res){
    if(n<=0) {
        res.push_back(s);
        return;
    }
    else{
//        s[n] = '1';
        utility(s, n-1, res);
        s[n-1] = '1';
        utility(s, n-1,res);
        s[n-1] = '0';
    }
}

void utilityBs(bitset<16>&M, vector<string>&res, int n){
    if(n==0){
        res.push_back(M.to_string());
        return;
    }
    else{
        utilityBs(M, res, n-1);
        M.flip(n-1);
        utilityBs(M, res, n-1);
    }
}

int main(){
    int n;
    cin>>n;
//    string s = string(n, '0');
    bitset<16> bts;
    vector<string> res;
//    utility(s, n-1, res);
    utilityBs(bts, res, n);
//    reverse(res.begin(), res.end());
    for(int i = 0; i < res.size(); i++){
//        cout<<"before -> "<<res[i]<<"\n";
        res[i] = res[i].substr(16-n, n);
//        cout<<"after -> "<<res[i]<<"\n";
    }
    for(string &i: res) cout<<i<<"\n";
}
