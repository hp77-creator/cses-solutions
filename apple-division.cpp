//
// Created by himanshu.pandey on 28/10/23.
//

#include <bits/stdc++.h>

using namespace std;
#define ull long long

ull minDiff(ull currentSum, ull totalSum, vector<int>&apples, int index){
    if (index == 0)
        return abs((ull)((totalSum - currentSum) - currentSum));

    return min(minDiff(currentSum+apples[index], totalSum, apples, index-1), minDiff(currentSum, totalSum, apples, index-1));


}

int main(){
    int n; cin>>n;
    vector<int> apples(n);
    for(int &i: apples) cin>>i;
    ull totalSum = 0;
    for(int i: apples) totalSum+=i;
    cout<<minDiff(0, totalSum, apples, n-1);
}

