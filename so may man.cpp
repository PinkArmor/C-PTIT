#include <bits/stdc++.h>
using namespace std;
int check(string s){
	for(int i=0; i<s.size(); i++){
		if(s[s.size()-1]=='6' && s[s.size()-2]=='8'){
			return 1;
		}
	}
	return 0;
}
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		if(check(s) ) cout << "1\n";
		else cout << "0\n";
	}
}
