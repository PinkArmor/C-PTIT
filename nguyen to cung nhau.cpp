#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b){
	while(b){
		long long r = a%b;
		a=b;
		b=r;
	}
	return a;
}
bool check(long long n){
	for(int i=2; i<=sqrt(n); i++){
		return false;
	}
	return n>1;
}
int main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		int cnt =0;
		for(int i=1; i<=n; i++){
			if(gcd(i,n)==1){
				++cnt;
			}
		}
		if(check(cnt)) cout << "1\n";
		else cout << "0\n";
	}
}
