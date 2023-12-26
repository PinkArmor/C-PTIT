#include <bits/stdc++.h>
using namespace std;
bool check(string s){
	int n = s.size();
	for(int i=0; i<= n/2; i++){
	    if(s[i] == s[n-i-1]){
	    	return true;
		}
	}
	return false;
}
bool check1(string s){
	int n = s.size();
	for(char x:s){
		int num = x- '0';
		if(num % 2!=0){
			return false;
		} 
	}
	return true;
}
int main(){
	int t; cin >> t;
	cin.ignore(1);
	while(t--){
		string s;
		cin >> s;
		if(check(s) && check1(s)){
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
}
