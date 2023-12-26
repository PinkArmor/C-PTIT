#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		map<char , int> mp;
		int Max =  -1e9;
		for(int i=0; i<s.size(); i++){
			mp[s[i]]++;
			Max = max(mp[s[i]] , Max);
		}
		if(Max <= s.size() - Max +1) cout << "1\n";
		else cout << "0\n";
	}
}
