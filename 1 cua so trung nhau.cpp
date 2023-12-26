#include <bits/stdc++.h>
using namespace std;
bool solve (int n, int k, int a[]){
	multiset<int> se;
	for(int i=0; i<k; i++){
		if(se.count(a[i])){  // ham find trong set tra ve iterator
			return true;
		}
		se.insert(a[i]);
	}
	for(int i=k; i<n; i++){
		se.erase(a[i-k]); // xoa phan tu o truoc
		if(se.count(a[i])){
			return true;
		}
		se.insert(a[i]);
	}
	return false;
}
int main(){
	int n,k; cin >> n >> k;
	int a[n];
	
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	if(solve(n,k,a)) cout << "YES\n";
	else cout << "NO\n";
}
