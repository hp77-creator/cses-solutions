//
// Created by himanshu.pandey on 27/10/23.
//

#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long


int main() {
    string s; cin>>s;
    map<char, int> mp;
    for(char i: s) mp[i]++;
    //conditions for any string to be palindrome:
    // one character should be in odd, if other characters are in even no.
    // all even also works
    // more than one character with odd count won't work
    set<char> setString(s.begin(), s.end());
    int countEven = 0, countOdd = 0;
    for(auto it = setString.begin(); it != setString.end(); it++){
        if(mp[*it] % 2 == 0){
            countEven++;
        }
        else{
            countOdd++;
        }
    }
    if(countOdd > 1) cout<<"NO SOLUTION\n";
    else{
        string left ="", right = "";
        char oddChar = '1';
        for(auto &it: mp){
            char c = it.first;
            int cnt = it.second;
            if(cnt % 2== 0){
                left += string(cnt/2, c);
                right = string(cnt/2, c) + right;
            }
            else{
                left += string(cnt/2, c);
                oddChar = c;
                right = string(cnt/2, c) + right;
            }
        }
        if(oddChar == '1') {
           cout<<(left + right)<<"\n";
        }
        else {
            cout<<(left + oddChar + right)<<"\n";
        }
    }
}

