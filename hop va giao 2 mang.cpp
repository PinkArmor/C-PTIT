#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,m; cin >> n >> m;
		int a[n];
		set <int> se1,se2;
		for(int i=0; i<n; i++){
			cin >> a[i];
			se1.insert(a[i]);
			
		}
		for(int i=0; i<m; i++){
			int x; cin >> x;
			se1.insert(x);
			se2.insert(x);
		}
		for(auto it:se1){
			cout << it << " ";
		}
		cout << endl;
		for(auto x:a){
			if(se2.count(x)){
				cout << x << " ";
				se2.erase(x);
			}
		}
		cout << endl;
	}
}
