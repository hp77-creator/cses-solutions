#include <bits/stdc++.h>

using namespace std;

int main(){
	string s; cin>>s;
	int i = 0, j = 0;
	int max_len = INT_MIN;
	while(i < s.size() && j < s.size()){
		if(s[i] == s[j]){
			j++;
			max_len = max(j-i, max_len);
		}
		else{
			max_len = max(j-i, max_len);
			i=j;
			j++;
		}
	}
	
	cout<<max_len<<"\n";
}

	
