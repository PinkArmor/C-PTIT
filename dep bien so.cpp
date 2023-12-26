#include <bits/stdc++.h>
using namespace std;
bool tang(string &s){
	for(int i=1; i<s.size(); i++){
		if(s[i]<=s[i-1]) return 0;
	}
	return 1;
}
bool kt68(string &s){
	for(int i=0; i<s.size(); i++){
		if(s[i]!='6' && s[i] != '8') return 0;
	}
	return 1;
}
bool bang(string &s){
	for(int i=1; i<s.size(); i++){
		if(s[i] != s[i-1]){
			return 0;
		}
	}
	return 1;
}
bool daucuoi(string &s){
	for(int i=1; i<3; i++){
		if(s[i] != s[i-1]) return 0;
	}
	if(s[s.size()-1] != s[s.size()-2]){
		return 0;
	}
	return 1;
}
int main(){
	int t; cin >> t; 
	while(t--){
		string s; cin >> s;
		string a="";
		for(int i=5; i<s.size(); i++){
			if(isdigit(s[i])) a+= s[i];
		}
		if(tang(a) || kt68(a) || bang(a) || daucuoi(a)){
			cout << "YES\n";
		}
		else cout << "NO\n";
	}
}
