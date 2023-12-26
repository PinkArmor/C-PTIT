#include <bits/stdc++.h>
using namespace std;
bool check1(string &a){
	for(int i=5; i<=10; i++){
		if(i==8) continue;
		if(a[i]!='6' && a[i]!='8'){
			return false;
		} 
	}
	return true;
}
bool check2(string &a){
	if(a[5]==a[6] && a[6]==a[7] && a[9]==a[10]){
		return true;
	}
	return false;
}
bool check3(string &a){
	if(a[5]<a[6] && a[6]<a[7] && a[7]<a[9] && a[9]<a[10]){
		return true;
	}
	return false;
}
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s; 
		getline(cin,s);
		if(check1(s) || check2(s) || check3(s)){
			cout << "YES\n";
		}
		else cout << "NO\n";
	}
}
