#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,k,ans; cin >> n >>k;
		map<int, int> mp;
		for(int i=0; i<n; i++){
			int x; cin >> x;
			mp[x]++;
		}
		int ok =0;
		for(auto it : mp){
	        if(it.first == k && !ok){
				ans = it.second;
				ok=1;
			}
		}
		if(ok) cout << ans << endl;
		else cout <<"-1\n";
	}
}
