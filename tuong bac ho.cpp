#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin >> n >> k;
	int a[n+1];
	for(int i=1; i<=n; i++){
		cin >> a[i];
	}
	int pre[n+1] = {0};
	pre[0] = a[0], pre[1] = a[1];
	for(int i=1; i<=n; i++){
		pre[i] = pre[i-1] + a[i];
	}
	while(k--){
		int l,r; cin >> l >> r;
		cout << pre[r] - pre[l-1] << endl;
	}
}
