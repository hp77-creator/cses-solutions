//
// Created by himanshu.pandey on 27/10/23.
//
#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long


void tower_of_hanoi(int blocks, char from, char helper, char to){
    if(blocks == 1){
        cout<<from<<" "<<to<<"\n";
            return;
    }
    else{
        tower_of_hanoi(blocks-1, from, to, helper);
        cout<<from<<" "<<to<<"\n";
        tower_of_hanoi(blocks-1, helper, from, to);
//        cout<<helper<<" "<<to<<"\n";
    }
}

int main(){
    int n; cin>>n;
   // tower of hanoi ->
   // 3>2>1| |
   // 2>1 | 3 |  -- A | B | C
   // 1 | 2 > 3 |  -- A -> B, C as helper
   // | 2> 3 | 1   --
   // | 3 | 2 > 1
   // | | 3 > 2 > 1
   cout<<(1<<n)-1<<"\n";
   tower_of_hanoi(n, '1', '2', '3');
}

