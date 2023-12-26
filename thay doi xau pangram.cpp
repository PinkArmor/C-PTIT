#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s;
	    cin >> s;
		int k; cin >> k;
		set<int> se;
		if(s.size() < 26){
			cout << "1\n";
			continue;
		}
		for(int i=0; i<s.size(); i++){
			se.insert(s[i]);
		}
		if(26-se.size() <= k) cout << "1\n";
		else cout << "0\n";
	}
}
