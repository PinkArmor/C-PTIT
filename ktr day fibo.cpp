#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
bool check(long long n){
	if(n==0 || n==1){
		return true;
	}
	long long fn1=0, fn2=1, fn;
	for(int i=2; i<=92; i++){
		fn = fn1+fn2;
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
		int n; cin >> n;
		vector<long long> v;
		for(int i=0; i<n; i++){
			int x; cin >> x;
			v.push_back(x);
		}
		for(int i=0; i<v.size(); i++){
			if(check(v[i])) cout << v[i] << " ";
		}
		cout << endl;
	}
}
