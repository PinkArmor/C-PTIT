#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll du(string a, ll m){
	ll r =0;
	for(char x:a){
		r = r*10 + x-'0';
		r %=m;
	}
	return r;
} 
ll bin_pow(ll a, ll b, ll m){
	ll r=1;
    while(b){
    	if(b%2==1){
    		r *=a;
    		r%=m;
		}
		a*=a;
		a%=m;
		b/=2;
	}
	return r;
}
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		ll b,m; cin >> b >> m;
		ll r = du(s,m);
		cout << bin_pow(r,b,m) << endl;
	}
}
