//
// Created by himanshu.pandey on 27/10/23.
//

#include <iostream>

using namespace std;

#define ull unsigned long long

int main() {
    ull t; cin>>t;
    while(t--){
        ull a, b;cin>>a>>b;
        //basic idea, if sum of a and b % 3==0, print YES
        if((a+b) % 3 != 0 || a > 2*b || b > 2 *a ) cout<<"NO\n";
        else cout<<"YES\n";
    }
}
