#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,m; cin >>n>>m;
		vector<int> a(n);
		vector<int> b(n);
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		for(int i=0; i<m; i++){
			cin >> b[i];
		}
		cout << *max_element(a.begin(), a.end()) * *min_element(b.begin(),b.end())<< endl;
	}
}
