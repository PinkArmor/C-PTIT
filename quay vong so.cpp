#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;
		vector<int> v(n);
		for(int i=0; i<n; i++){
			cin >> v[i];
		}
		for(int i=k; i<n; i++){
			cout << v[i] << " ";
		}
		for(int i=0; i<k; i++){
			cout << v[i] << " ";
		}
		cout << endl;
	}
}
