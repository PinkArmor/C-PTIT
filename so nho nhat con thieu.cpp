#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		map <int,int> mp;
		for(int i=0; i<n; i++){
		   cin >> a[i];
			mp[a[i]] = 1;
		}
		for(int i=1; i<10000001; i++){
			if(mp[i]==0){
				cout << i ;
				break;
			}
		}
		cout << endl;
	}
}
