#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int k,n; cin >> k >> n;
		vector<int> a(k*n);
	    vector<int> d;
	    for(int i=0; i<k*n; i++){
	    	cin >> a[i];
		}
		sort(a.begin(), a.end());
		for(int i=0; i<n*k; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}