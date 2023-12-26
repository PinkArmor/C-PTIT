#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n];
	for(int &x:a) cin >> x;
	int q; cin >>q;
	set<int> se;
	int f[n];
	for(int i=n-1; i>=0; i--){
		se.insert(a[i]);
		f[i] = se.size();
	}
	while(q--){
		int l; cin >> l;
		cout << f[l] << endl;
	}
}
