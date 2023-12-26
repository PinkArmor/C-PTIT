#include <bits/stdc++.h>
using namespace std;
int prime(int n){
	if(n==0 || n==1){
		return 0;
	}
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i=2; 1ll*i*i<=n; i++){
			if(prime(i)) cout << 1ll*i*i << " ";
		}
		cout << endl;
	}
}
