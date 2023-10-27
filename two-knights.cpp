#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long

int main(){
    ull n; cin>>n;
    // board size  -> no. of ways to keep 2 knights
    // 1 x 1 -> 0
    // 2 x 2 -> 4 x 3/2
    // 1 + (k-1)(k-2)/2 -> (2 + k^2 -3k + 2) /2 -> (k^2 - 3k + 4)/2 -> ( k+4)^2(k-1)^2/2;
    // n^2 + (n^2-1) * (n-1)*(n-2)/
    // final f(x) = (x^4 - 9x^2 + 24x -16)/2;
    for(int i = 1; i <= n; i++){
        ull cnt = 1ull + ((i-1)*(i-2)/2);
        cnt = cnt * (i-1) * (i+4);
        cout<<cnt<<"\n";
    }

}
