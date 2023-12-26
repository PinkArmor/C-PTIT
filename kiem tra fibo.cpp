#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
bool check(long long n){
	if(n==0 ||n==1){
		return true;
	}
	long long fn1=0, fn2=1, fn;
	for(int i=0; i<=92; i++){
		fn = fn1 + fn2;
		if(fn==n){
			return true;
		}
		fn1=fn2;
		fn2=fn; 
 	}
 	return false;
}
int main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		if(check(n)) cout << "YES\n";
		else cout << "NO\n";
	}
}
