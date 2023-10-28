#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long

int main() {
	ull t; cin>>t;
	while(t--){
		ull x, y;
		cin>>x>>y;
		ull l = max(x, y) - 1;
		if(l&1){
			if(y > x){
				cout<<(l*l + x)<<" ";
			}
			else{
				cout<<(l*l + 2*l - y + 2)<<" ";
			}
		}
		else{

			if(y > x){
				cout<<(l*l + 2*l - x + 2)<<" ";
			}
			else{
				cout<<(l*l + y)<<" ";
			}
		}

	}
}
