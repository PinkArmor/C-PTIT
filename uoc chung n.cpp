#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b){
	while(b){
		int r = a%b;
		a=b;
		b=r;
	}
	return a;
}
long long lcm(long long a, long long b){
	return (a/gcd(a,b))*b;
}
int main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		long long a=1;
		for(int i=1; i<=n; i++){
			a = lcm(i,a);
		}
		cout << a << endl;
	}
}
