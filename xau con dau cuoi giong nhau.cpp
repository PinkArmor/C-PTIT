#include <bits/stdc++.h>
using namespace std;
int main(){
	string s; cin >> s;
	long long ans = s.size();
	map<char,int> mp;
	for(int i=0; i<s.size(); i++){
		mp[s[i]]++;
	}
	for(auto it:mp){
		ans += 1ll *it.second*(it.second-1)/2; 
	}
	cout << ans;
}
