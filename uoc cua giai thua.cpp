#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;
		int cnt =0;
		for(int i=k; i<=n; i*=k){
		     cnt += n/i;
		}
		cout << cnt << endl;
	}
}
