//
// Created by Himanshu Pandey on 26/10/23.
//
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long

int main() {
    ull t; cin>>t;
    // 3 -> 1, 2 | 3
    // 4 -> 1, 4 | 2, 3
    // x + x = n * (n + 1)/ 2;
    // 4 x = n * (n + 1);
    // x = n * (n + 1)/4;
    // x = n * (n + 1);
    // 8 -> 1, 4, 5, 8 | 2, 3, 6, 7
    // 11 -> 1, 2, 4, 7,  | 3, 5, 6
    if(t * (t+1) % 4 != 0) cout<<"NO\n";
    else {
        cout<<"YES\n";
        ull one_half_sum = (t * (t + 1))/4;
        vector<ull> first_set, second_set;
        if(t&1){
            // 1, 2 -> 1st
            // 3 -> 2nd
            //divide numbers in group of 4
            // after that, first and last of 4 to be added in first set
            // second and third to be added in another set
            int i = 1;
            first_set.push_back(i++);
            first_set.push_back(i++);
            second_set.push_back(i++);
            int flag = 0;
            for(; i<=t; i++){
//                cout<<"i is "<<i;
                if(flag==4) flag =0;
                if(flag == 0 || flag == 3){
                    first_set.push_back(i);
                    flag++;
                }
                else {
                    second_set.push_back(i);
                    flag++;
                }
            }
            cout<<first_set.size()<<"\n";
            for(ull j: first_set) cout<<j<<" ";
            cout<<"\n";
            cout<<second_set.size()<<"\n";
            for(ull j: second_set) cout<<j<<" ";
            cout<<"\n";
        }
        else{
            int flag = 0;
            for(int i = 1; i <= t; i++){
                if(flag==4) flag =0;
                if(flag==0 || flag == 3){
                    first_set.push_back(i);
                    flag++;
                }
                else {
                    second_set.push_back(i);
                    flag++;
                }
            }
            cout<<first_set.size()<<"\n";
            for(ull i: first_set) cout<<i<<" ";
            cout<<"\n";
            cout<<second_set.size()<<"\n";
            for(ull i: second_set) cout<<i<<" ";
            cout<<"\n";
        }
    }
}