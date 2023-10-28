#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long

int main(){
	ull n;
	cin>>n;
	vector<ull> nums(n);
	ull ans = 0, zer = 0;

	for(ull &i: nums) cin>>i;
	ull prev = nums[0];
	for(ull i = 1; i < n; i++){
		if(prev > nums[i]) {
			ans += prev-nums[i];
			nums[i] = prev;
		}
		prev = nums[i];
//		cout<<"ans -> "<<ans<<" nums[i] "<<nums[i]<<" prev "<<prev<<"\n";
	}
	cout<<ans<<"\n";
}

