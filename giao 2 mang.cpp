#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m; cin >> n >> m;
	int a[n];
	set<int> se;
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; i<m; i++){
		int x; cin >> x;
		se.insert(x);
	}
	for(int i:a){
		if(se.count(i)){
			cout << i << " ";
			se.erase(i);
		}
	}
}
