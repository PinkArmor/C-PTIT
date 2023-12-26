#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;
		int a[n];
		int ok=-1;
		set <int> se;
		for(int i=0; i<n; i++){
			cin >> a[i];
			se.insert(a[i]);
		}
		for(int i=0; i<n; i++){
			int tmp = k + a[i];
			if(se.find(tmp) != se.end()){
				ok=1;
			}
		}
		cout << ok << endl;
	}
}
