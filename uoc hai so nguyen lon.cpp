#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b){
	ll r;
	while(b){
		r = a%b;
		a = b;
		b = r;
	}
	return a;
}
ll du (string a, ll m){
	ll r=0;
	for(char x:a){
		r  = r*10 + x-'0';
		r%=m;
	}
	return r;
}
int main(){
	int t; cin >> t;
	while(t--){
		ll a; string b; 
		cin >> a >> b;
		ll r = du(b,a);
		cout << gcd(a,r) << endl;
	}
}
