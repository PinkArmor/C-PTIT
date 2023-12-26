#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;
		multiset<int> se;
		for(int i=0; i<n; i++){
			int x; cin >> x; 
			se.insert(x);
		}
	    auto it = se.end();
		for(int i=0; i<k; i++){
			it--;
			cout << *it << " "; 
		}	
		cout << endl;
	}
}
