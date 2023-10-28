#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long

void simulate(ull n){

	cout<<n<<" ";
	if(n==1) return;
	else if(n%2==0){
		n /= 2;
		simulate(n);
	}
	else if(n % 2 != 0){
		n = n * 3 + 1;
		simulate(n);
	}
}

int main(){
	ull n;
	cin>>n;
	simulate(n);
}
