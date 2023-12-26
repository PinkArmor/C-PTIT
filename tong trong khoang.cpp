#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,q; cin >> n >> q;
		vector<int> v(n);
		for(int i=0; i<n; i++){
			cin >> v[i];
		}
		
		while(q--){
			int l,r; cin >> l >> r;
			cout << accumulate(v.begin()+l-1, v.begin()+r, 0) <<endl  ;
		}
		cout << endl;
	}
}
