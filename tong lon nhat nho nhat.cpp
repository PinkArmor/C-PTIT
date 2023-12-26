#include <bits/stdc++.h>
using namespace std;
void chuan5(string &s){
	for(int i=0; i<s.size(); i++){
		if(s[i]=='5'){
			s[i]='6';
		}
	}
}
void chuan6(string &s){
	for(int i=0; i<s.size(); i++){
		if(s[i]=='6'){
			s[i]='5';
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		string s1,s2;
		cin >> s1 >> s2;
		long long lon,nho;
		chuan6(s1);
		chuan6(s2);
		nho = stoll(s1) + stoll(s2);
		cout << nho <<" ";
		chuan5(s1);
		chuan5(s2);
		lon = stoll(s1) + stoll(s2);
		cout << lon << endl; 
	}
}
