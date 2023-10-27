//
// Created by himanshu.pandey on 27/10/23.
//
#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long


ull MOD=1000'000'000 + 7;

ull powerMod(ull power, ull base=2, ull mod=MOD){
    ull res = 1;
    while(power > 0){

        if(power%2==1){
            res = (res *base) % mod;
        }
        power = power >> 1;
        base = (base * base) % mod;
    }
    return res;
}


int main(){
    ull n; cin>>n;
    cout<<powerMod(n);
}
