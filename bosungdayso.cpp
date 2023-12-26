#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int a[n];
	set<int> se;
	for(int i=0; i<n; i++){
		cin >> a[i];
		se.insert(a[i]);
	}
	if(a[n-1]==n) cout << "ok\n";
	for(int i=1; i<=a[n-1]; i++){
		if(se.count(i)==0){
			cout << i <<endl;
		}
	}
}
