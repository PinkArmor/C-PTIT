#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		vector<long long> a(n);
		vector<long long> b;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		for(int i=0; i< n; i++){
			if(a[i]==0){
				b.push_back(a[i]);
			}
		}
		for(int i=0; i<n; i++){
			if(a[i]==0){
				continue;
			}
			cout << a[i] << " ";
		}
		for(auto it : b) cout << it << " ";
		cout << endl;
	}
}