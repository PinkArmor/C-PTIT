#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
bool check(int n){
	if(n==0) return false;
	return true;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n,m; cin >> n >> m;
		vector<int> a(n);
		vector<int> b(m);
		vector<int> c;
		for(int i=0; i<n; i++){
			int x; cin >> x;
			a.push_back(x);
			c.push_back(x);
		}
		for(int i=0; i<m; i++){
			int y; cin >> y;
			b.push_back(y);
			c.push_back(y);
		}
		sort(c.begin(), c.end());
		for(int i=0; i<c.size(); i++){
				cout << c[i] << " ";
			
		} 
		cout << endl;
	}
}
