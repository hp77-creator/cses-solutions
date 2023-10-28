#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long




int main(){
	ull n;
	cin>>n;
	ull s = 0;
	for(int i =1; i < n; i++){
		ull a; cin>>a;
		s += a;
	}
	cout<<((n * (n+1)/2)-s)<<"\n";
}
		
