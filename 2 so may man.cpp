#include <bits/stdc++.h>
using namespace std;
bool check(string &s){
	int sum =0;
	for(int i=0; i<s.size(); i++){
		sum += s[i] - '0';
	}
	if(sum%9==0 && sum){
		return true;
	}
	return false;
}
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int sum = 0;
		for(int i=0; i<s.size(); i++){
			sum += s[i] - '0';
		}
		string n = to_string (sum);
		if(check(s) || check(n)){
			cout << "1\n";
		}
		else cout << "0\n";
	}
}
