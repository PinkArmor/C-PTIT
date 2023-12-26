#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
	    vector <long long> a(n);
	    vector <long long> v;
	    set <int> se;
	    for(int i=0; i<n; i++){
	    	cin >> a[i];
		}
		for(int i=0; i<n; i++){
			while(a[i]){
				int r = a[i] % 10;
				se.insert(r);
				a[i] /=10;
			}
		}
		for(auto x : se) cout << x << " ";
		cout << endl;
	}
}