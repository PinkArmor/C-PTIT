#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		set <int> se;
		for(int i=0; i<n; i++){
			int x; cin >> x;
			se.insert(x);
		}
		if(se.size() > 1){
			cout << *se.begin() << " ";
			auto it = se.begin();
			it++;
			cout << *it << endl;;
		}
		else cout << "-1\n";
	}
}
