//
// Created by himanshu.pandey on 27/10/23.
//
#include <iostream>
using namespace std;

#define ull unsigned long long

int main(){
    ull n; cin>>n;
    ull res = 0;
    while(n > 0){
        n /= 5;
        res += n;
    }
    cout<<res<<"\n";
}

