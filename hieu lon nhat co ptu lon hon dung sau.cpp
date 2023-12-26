#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> v(n);
		for(int i=0; i<n ; i++){
			cin >> v[i];
		}
		int ok =-1;
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				if(v[j] > v[i]){
					ok = max(ok, v[j]-v[i]);
				}
			}
		}
		cout << ok << endl;
	}
}
