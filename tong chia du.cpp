#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while (t--){
		long long n,k; cin >> n >> k;
		long long sum=0;
		for(int i=1; i<=n; i++){
			sum += i%k;
			
		}
		if(sum==k) cout << "1\n";
		else cout << "0\n";
	}
}
