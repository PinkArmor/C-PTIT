#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int linearsearch(int a[], int n, int x){
	for(int i=0; i<n; i++){
		if(x == a[i]){
			return true;
		}
	}
	return false;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n,x,ans; cin >> n >> x;
		int a[n];
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		int check=0;
		for(int i=0; i<n; i++){
			if(x == a[i] && !check){
			   ans=i;
			   check=1;
			}
		}
		if(check) cout << ans+1 << endl;
		else cout << "-1\n";
	}
}
