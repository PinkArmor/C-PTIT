#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		map<int,int> mp;
		for(int i=0; i<n; i++){
			int x; cin >> x;
			mp[x]=1;
		}
		for(int i=1; i<=1000001; i++){
			if(mp[i]==0){
				cout << i;
				break;
			}
		}
		cout << endl;
	}
}
