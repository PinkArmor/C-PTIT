#include <bits/stdc++.h>
using namespace std;
long long check(long long n){
	if(n==1) return 1;
	if(n%2==0) return 2;
	int ans;
	for(long long i=2; i<=sqrt(n); i++){
		if(n%i==0){
			while(n%i==0){
				return i;
			}
		}
	}
	if(n > 1) return n;
}
int main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		for(long long i=1; i<=n; i++){
			long long a = check(i);
			cout << a << " ";
		}
		cout << endl;
	}
}
